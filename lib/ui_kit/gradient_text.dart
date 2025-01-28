import 'package:flutter/cupertino.dart';
import 'package:flutter/material.dart';

class GradientText extends StatelessWidget {
  final bool isCenter;
  const GradientText(
    this.text, {
    this.isCenter = false,
    super.key,
    required this.gradientColor,
    required this.shaderColor,
  });

  final String text;
  final List<Color> gradientColor;
  final List<Color> shaderColor;

  @override
  Widget build(BuildContext context) {
    final gradient = LinearGradient(
      colors: gradientColor,
      begin: Alignment.topCenter,
      end: Alignment.bottomCenter,
    );

    return Stack(
      children: [
        Text(
          text,
          textAlign: isCenter ? TextAlign.center : null,
          style: TextStyle(
            fontSize: 30,
            fontFamily: 'UNCAGE',
            fontWeight: FontWeight.w600,
            color: Colors.transparent,
            letterSpacing: 1.50,
            shadows: [
              BoxShadow(
                color: shaderColor.first,
                blurRadius: 6.5,
                spreadRadius: 15,
                offset: Offset(
                  0.0,
                  0,
                ),
              ),
              BoxShadow(
                color: shaderColor.last,
                blurRadius: 30.2,
                spreadRadius: 15.0,
                offset: Offset(
                  0.0,
                  0,
                ),
              ),
            ],
          ),
        ),
        ShaderMask(
          blendMode: BlendMode.srcIn,
          shaderCallback: (bounds) => gradient.createShader(
            Rect.fromLTWH(0, 0, bounds.width, bounds.height),
          ),
          child: Text(
            text,
            textAlign: isCenter ? TextAlign.center : null,
            style: TextStyle(
              color: gradientColor.first,
              fontSize: 30,
              fontFamily: 'UNCAGE',
              fontWeight: FontWeight.w600,
              letterSpacing: 1.50,
            ),
          ),
        ),
      ],
    );
  }
}

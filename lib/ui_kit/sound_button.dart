import 'package:flutter/material.dart';
import 'package:haker_ball/src/core/utils/app_icon.dart';
import 'package:haker_ball/src/core/utils/icon_provider.dart';
import 'package:haker_ball/ui_kit/animated_button.dart';
import 'package:just_audio/just_audio.dart';

import '../src/core/utils/size_utils.dart';

final player = AudioPlayer();
ValueNotifier<bool> isPlaying = ValueNotifier(true);

class SoundButton extends StatefulWidget {
  const SoundButton({super.key});

  @override
  State<SoundButton> createState() => _SoundButtonState();
}

class _SoundButtonState extends State<SoundButton> {
  @override
  Widget build(BuildContext context) {
    return ValueListenableBuilder<bool>(
      valueListenable: isPlaying,
      builder: (context, value, child) {
        return AnimatedButton(
          onPressed: () {
            setState(() {
              if (value) {
                stopMusic();
                isPlaying.value = false;
              } else {
                playMusic();
                isPlaying.value = true;
              }
            });
          },
          child: AppIcon(
            asset: value
                ? IconProvider.soundon.buildImageUrl()
                : IconProvider.sound.buildImageUrl(),
            width:isIpad(context)?90:63,
            fit: BoxFit.fitWidth,
          ),
        );
      },
    );
  }
}

void playMusic() async {
  await player.setAsset('assets/images/Neon Shadow.mp3');
  await player.setLoopMode(LoopMode.one); // Зацикливаем трек
  await player.play();
}

void stopMusic() async {
  await player.stop();
}

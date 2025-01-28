enum IconProvider {
  splash(imageName: 'splash.png'),
  logo(imageName: 'logo.png'),
  back(imageName: 'back.png'),
  tips(imageName: 'tips.png'),
  achievements(imageName: 'achievements.png'),
  tipsBlock(imageName: 'tips_block.png'),
  purpleButton(imageName: 'purple_button.png'),
  yellowButton(imageName: 'yellow_button.png'),
  blueButton(imageName: 'blue_button.png'),
  unknown(imageName: '');

  const IconProvider({
    required this.imageName,
  });

  final String imageName;
  static const _imageFolderPath = 'assets/images';

  String buildImageUrl() => '$_imageFolderPath/$imageName';
  static String buildImageByName(String name) => '$_imageFolderPath/$name';
}

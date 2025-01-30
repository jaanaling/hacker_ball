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
  lock(imageName: 'lock.svg'),
  star(imageName: 'star.svg'),
  starGrey(imageName: 'stare.svg'),
  background(imageName: 'background.png'),
  level(imageName: 'level.svg'),
  lore(imageName: 'lore.svg'),
  achiv(imageName: 'achiv.svg'),
  answ(imageName: 'answ.svg'),
  key(imageName: 'key.svg'),
  panel(imageName: 'panel.svg'),
  win(imageName: 'win.svg'),
  soundon(imageName: 'soundon.png'),
  sound(imageName: 'sound.png'),
  claim(imageName: 'claim.svg'),
  day(imageName: 'daily reward.svg'),

  unknown(imageName: '');

  const IconProvider({
    required this.imageName,
  });

  final String imageName;
  static const _imageFolderPath = 'assets/images';

  String buildImageUrl() => '$_imageFolderPath/$imageName';
  static String buildImageByName(String name) => '$_imageFolderPath/$name';
}

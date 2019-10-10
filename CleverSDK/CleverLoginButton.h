#import <UIKit/UIKit.h>

@interface CleverLoginButton : UIButton

+ (CleverLoginButton *)createLoginButtonWithBackgroundFill:(UIColor *)backgroundFill
                                           textAndIconFill:(UIColor *)textAndIconFill;
+ (UIColor *)white;
+ (UIColor *)blue;

- (void)setOrigin:(CGPoint)origin;
- (void)setWidth:(CGFloat)width;

@end

#import <UIKit/UIKit.h>

@interface XFontCatalog : NSObject
+ (UIFont*)fontForToken:(long long)token;
+ (UIFont*)customFontOfSize:(CGFloat)size
                      weight:(long long)weight
      scalesWithDynamicType:(BOOL)scales;
+ (UIFont*)spoofingResistantUsernameFontForToken:(long long)token;
+ (UIFont*)monospaceFixedFontOfSize:(CGFloat)size;
+ (UIFont*)contentFontWithOffset:(CGFloat)offset weight:(long long)weight;
+ (UIFont*)tabularDigitsFontOfSize:(CGFloat)size weight:(CGFloat)weight;
+ (void)resetCachedFonts;
@end
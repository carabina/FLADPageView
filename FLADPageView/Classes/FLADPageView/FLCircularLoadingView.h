//
//  FLCircularLoadingView.h
//  Pods
//
//  Created by Feilx on 2016/6/30.
//
//

#import <UIKit/UIKit.h>

@interface FLCircularLoadingView : UIView
@property (nonatomic) CGFloat progress;
@property (nonatomic) UIColor *strokeColor;
- (void)reveal;
@end

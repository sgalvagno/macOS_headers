//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CalUITouchBarUtilities : NSObject
{
}

+ (BOOL)isDebugEnabled;
+ (id)collapsedButtonFromPopoverItem:(id)arg1;
+ (id)imageNamed:(id)arg1;
+ (void)removeTintFromButton:(id)arg1;
+ (void)applyTintToButton:(id)arg1 tint:(id)arg2;
+ (id)touchBarAppearance;
+ (id)buttonGroupButtonFromButton:(id)arg1 preferredWidth:(double)arg2;
+ (id)buttonGroupButtonFromButton:(id)arg1;
+ (id)expandingButtonWithTitle:(id)arg1 image:(id)arg2 target:(id)arg3 action:(SEL)arg4 size:(double)arg5;
+ (id)buttonWithTitle:(id)arg1 image:(id)arg2 target:(id)arg3 action:(SEL)arg4 size:(double)arg5;
+ (id)buttonWithTitle:(id)arg1 image:(id)arg2 target:(id)arg3 action:(SEL)arg4;
+ (id)stackView;
+ (id)scrollViewWithView:(id)arg1;
+ (id)itemWithIdentifier:(id)arg1 view:(id)arg2;
+ (id)doneButtonItemWithTarget:(id)arg1 action:(SEL)arg2;

@end


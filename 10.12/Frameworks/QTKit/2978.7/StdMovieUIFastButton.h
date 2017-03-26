//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <QTKit/StdMovieUIButton.h>

__attribute__((visibility("hidden")))
@interface StdMovieUIFastButton : StdMovieUIButton
{
    unsigned long long numRepeats;
    id behaviorTarget;
    SEL mouseInAction;
    SEL mouseOutAction;
    SEL basicAction;
}

+ (void)initialize;
- (void)mouseDown:(id)arg1;
- (BOOL)performKeyEquivalent:(id)arg1;
- (void)startTrackingBehaviors;
- (void)mouseExitedBehavior;
- (void)mouseEnteredBehavior;
- (BOOL)inFastMode;
- (void)resetCounter;
- (unsigned long long)countARepeat;
- (void)setBehaviorTarget:(id)arg1 forMouseIn:(SEL)arg2 forMouseOut:(SEL)arg3 basicAction:(SEL)arg4;
- (id)initWithFrame:(struct CGRect)arg1;

@end


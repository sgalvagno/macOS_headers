//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <InputMethodKit/IMKUIView.h>

@class NSString;

@interface IMKTouchButton : IMKUIView
{
    SEL _action;
    long long _state;
    id _target;
    NSString *_title;
}

@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) id target; // @synthesize target=_target;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) SEL action; // @synthesize action=_action;
- (void)drawRect:(struct CGRect)arg1;
- (void)tapped:(id)arg1 position:(struct CGPoint)arg2;
- (void)dealloc;

@end


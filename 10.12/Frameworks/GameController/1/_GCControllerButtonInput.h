//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <GameController/GCControllerButtonInput.h>

@class NSString;

@interface _GCControllerButtonInput : GCControllerButtonInput
{
    CDUnknownBlockType _valueChangedHandler;
    CDUnknownBlockType _pressedChangedHandler;
    float _value;
    NSString *_descriptionName;
}

- (void)setPressedChangedHandler:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)pressedChangedHandler;
- (void)setValueChangedHandler:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)valueChangedHandler;
- (float)value;
- (void).cxx_destruct;
- (id)description;
- (BOOL)_setValue:(float)arg1 queue:(id)arg2;
- (BOOL)_setValue:(float)arg1;
- (id)initWithDescriptionName:(id)arg1;

@end


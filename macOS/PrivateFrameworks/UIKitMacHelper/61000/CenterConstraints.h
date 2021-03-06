//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitMacHelper/Constraints-Protocol.h>

@class NSLayoutConstraint;

__attribute__((visibility("hidden")))
@interface CenterConstraints : NSObject <Constraints>
{
    NSLayoutConstraint *_centerX;
    NSLayoutConstraint *_centerY;
    NSLayoutConstraint *_width;
    NSLayoutConstraint *_height;
}

@property(copy, nonatomic) NSLayoutConstraint *height; // @synthesize height=_height;
@property(copy, nonatomic) NSLayoutConstraint *width; // @synthesize width=_width;
@property(copy, nonatomic) NSLayoutConstraint *centerY; // @synthesize centerY=_centerY;
@property(copy, nonatomic) NSLayoutConstraint *centerX; // @synthesize centerX=_centerX;
- (void).cxx_destruct;
- (void)removeAllFromView:(id)arg1;
- (void)setHeightValue:(double)arg1;
- (void)setWidthValue:(double)arg1;
- (void)setSize:(struct CGSize)arg1;
- (void)setCenter:(struct CGPoint)arg1;
@property(nonatomic, getter=isActive) BOOL active;
- (id)initWithCenterX:(id)arg1 centerY:(id)arg2 width:(id)arg3 height:(id)arg4;

@end


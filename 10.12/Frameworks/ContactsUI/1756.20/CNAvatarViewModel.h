//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface CNAvatarViewModel : NSObject
{
    NSArray *_contacts;
    NSArray *_likenesses;
    long long _behavior;
    unsigned long long _placeholderContactCount;
}

@property(nonatomic) unsigned long long placeholderContactCount; // @synthesize placeholderContactCount=_placeholderContactCount;
@property long long behavior; // @synthesize behavior=_behavior;
@property(retain) NSArray *likenesses; // @synthesize likenesses=_likenesses;
@property(retain) NSArray *contacts; // @synthesize contacts=_contacts;
- (void).cxx_destruct;
- (id)editOverlayFont;
- (id)editOverlayTextColor;
- (id)editOverlayString;
- (double)knockoutThicknessForContainerSize:(struct CGSize)arg1 iconCount:(unsigned long long)arg2;
- (struct CGRect)knockoutFrameForIconAtIndex:(unsigned long long)arg1 containerSize:(struct CGSize)arg2 iconCount:(unsigned long long)arg3;
- (struct CGRect)frameForIconAtIndex:(unsigned long long)arg1 containerSize:(struct CGSize)arg2 iconCount:(unsigned long long)arg3;

@end


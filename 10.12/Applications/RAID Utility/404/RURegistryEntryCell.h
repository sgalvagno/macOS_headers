//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSActionCell.h>

@interface RURegistryEntryCell : NSActionCell
{
    SEL _subTitleSelector;
}

- (void)setSubTitleSelector:(SEL)arg1;
- (SEL)subTitleSelector;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (id)title;
- (id)image;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setRepresentedObject:(id)arg1;
- (void)dealloc;
- (id)init;

@end


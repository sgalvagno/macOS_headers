//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProKit/NSProTextFieldCell.h>

@class BKBaseContentsModule;

__attribute__((visibility("hidden")))
@interface BKSidebarBrowserContentsItemsCell : NSProTextFieldCell
{
    BKBaseContentsModule *_baseContentsModule;
}

@property BKBaseContentsModule *baseContentsModule; // @synthesize baseContentsModule=_baseContentsModule;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)proTextColor:(id *)arg1 backgroundColor:(id *)arg2;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)_proLabelFont;

@end


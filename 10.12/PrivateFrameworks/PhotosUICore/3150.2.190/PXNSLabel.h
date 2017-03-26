//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSArray, NSString, NSTextField, PXLabelSpec;

@interface PXNSLabel : NSView
{
    NSTextField *_label;
    NSArray *_labelLayoutConstraints;
    long long _verticalAlignment;
    struct NSEdgeInsets _contentInsets;
    NSString *_text;
    PXLabelSpec *_spec;
}

@property(retain, nonatomic) PXLabelSpec *spec; // @synthesize spec=_spec;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (id)_configuredText;
- (void)updateConstraints;
- (void)_configureLabel;
- (void)_commonPXNSMemoriesLabelInitialization;
- (struct CGRect)frameForAlignmentRect:(struct CGRect)arg1;
- (BOOL)wantsDefaultClipping;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FBABugForm, NSImage, NSString;

@interface FBABugFormPickerChoice : NSObject
{
    BOOL _showsProject;
    FBABugForm *_bugForm;
}

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
@property BOOL showsProject; // @synthesize showsProject=_showsProject;
@property(retain) FBABugForm *bugForm; // @synthesize bugForm=_bugForm;
- (void).cxx_destruct;
@property(readonly) NSImage *icon;
@property(readonly) NSString *subtitle;
@property(readonly) NSString *title;
- (id)initWithBugForm:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MigrationAssistantPane.h"

@class NSString, NSUserActivity, OBTemplateView;

@interface HandoffTargetLandingPane : MigrationAssistantPane
{
    OBTemplateView *_templateView;
    NSString *_explanatoryText;
    NSUserActivity *_triggeringActivity;
}

- (void).cxx_destruct;
@property(retain) NSUserActivity *triggeringActivity; // @synthesize triggeringActivity=_triggeringActivity;
@property(retain) NSString *explanatoryText; // @synthesize explanatoryText=_explanatoryText;
- (void)willDisplayPane;
- (id)nextPaneIdentifier;
- (id)previousPaneIdentifier;
- (id)templateView;

@end


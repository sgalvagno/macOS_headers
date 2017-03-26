//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSPredicateEditorRowTemplate.h>

@class NSPopUpButton, NSString, NSTextField;

@interface _AMTimeIntervalRowTemplate : NSPredicateEditorRowTemplate
{
    NSPopUpButton *_leftExpressionPopup;
    NSPopUpButton *_comparisonPopUpButton;
    NSTextField *_timeIntervalField;
    NSString *_name;
    NSString *_keyPath;
    BOOL _hasCreatedViews;
}

+ (id)templateWithName:(id)arg1 withKeyPath:(id)arg2;
- (id)predicateWithSubpredicates:(id)arg1;
- (void)setPredicate:(id)arg1;
- (double)matchForPredicate:(id)arg1;
- (id)templateViews;
- (id)convertToEvaluationPredicateFromUIPredicate:(id)arg1;
- (void)createViewsIfNecessary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithName:(id)arg1 withKeyPath:(id)arg2;

@end


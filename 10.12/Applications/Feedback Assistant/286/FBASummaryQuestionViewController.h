//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class FBAAnswer, FBAFeedbackSummaryQuestionGroupViewController, FBAQuestion, NSButton, NSColor, NSString;

@interface FBASummaryQuestionViewController : NSViewController
{
    BOOL _shouldShowQuestionLink;
    FBAQuestion *_question;
    FBAAnswer *_answer;
    NSString *_errorString;
    FBAFeedbackSummaryQuestionGroupViewController *_parentGroup;
    NSButton *_arrowButton;
}

+ (id)keyPathsForValuesAffectingDisplayingQuestionLink;
+ (id)keyPathsForValuesAffectingAnswerColor;
+ (id)keyPathsForValuesAffectingAnswerLabel;
+ (id)keyPathsForValuesAffectingQuestionLabel;
@property __weak NSButton *arrowButton; // @synthesize arrowButton=_arrowButton;
@property __weak FBAFeedbackSummaryQuestionGroupViewController *parentGroup; // @synthesize parentGroup=_parentGroup;
@property BOOL shouldShowQuestionLink; // @synthesize shouldShowQuestionLink=_shouldShowQuestionLink;
@property(retain) NSString *errorString; // @synthesize errorString=_errorString;
@property(retain) FBAAnswer *answer; // @synthesize answer=_answer;
@property(retain) FBAQuestion *question; // @synthesize question=_question;
- (void).cxx_destruct;
- (void)gotoQuestion:(id)arg1;
@property(readonly) BOOL displayingQuestionLink;
@property(readonly) NSColor *answerColor;
@property(readonly) NSString *answerLabel;
@property(readonly) NSString *questionLabel;
- (id)answerString;
- (void)loadView;
- (id)initWithQuestion:(id)arg1 answer:(id)arg2;

@end


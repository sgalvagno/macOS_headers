//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import "FBABugFormPickerDelegate-Protocol.h"
#import "FBADraftingDelegate-Protocol.h"
#import "FBAFeedbackSummaryQuestionGroupViewControllerDelegate-Protocol.h"
#import "FBAFilerDelegate-Protocol.h"
#import "NSWindowDelegate-Protocol.h"

@class FBAAdditionalFilesViewController, FBABugForm, FBABugFormPickerViewController, FBABugFormViewController, FBADraftingController, FBAFiler, FBAFormResponse, FBAOptOutWindowController, FBAPrivacyAlert, FBASubmissionViewController, FBASummaryViewController, NSArray, NSButton, NSDictionary, NSMutableSet, NSPopover, NSProgressIndicator, NSString, NSTextField, NSView, NSViewController;
@protocol FBADraftWindowDelegate, FBAProjectEntity;

@interface FBADraftWindowController : NSWindowController <FBADraftingDelegate, FBAFilerDelegate, FBABugFormPickerDelegate, FBAFeedbackSummaryQuestionGroupViewControllerDelegate, NSWindowDelegate>
{
    BOOL _newResponse;
    BOOL _isObserving;
    FBADraftingController *_draftingController;
    id <FBADraftWindowDelegate> _delegate;
    id <FBAProjectEntity> _projectContext;
    NSDictionary *_prefillTats;
    NSDictionary *_prefillAttachments;
    FBAPrivacyAlert *_privacyNoticeWindowController;
    FBAOptOutWindowController *_optOutWindowController;
    NSPopover *_bugFormPickerPopover;
    NSView *_loadingView;
    NSProgressIndicator *_loadingSpinner;
    NSTextField *_titleLabel;
    NSView *_pageContainerView;
    NSButton *_changeFormButton;
    NSButton *_continueButton;
    NSButton *_goBackButton;
    NSProgressIndicator *_gatheringProgress;
    NSTextField *_gatheringStatusText;
    NSViewController *_currentViewController;
    NSArray *_pageViewControllers;
    NSMutableSet *_visitedPages;
    FBABugFormPickerViewController *_bugFormPickerViewController;
    FBABugFormViewController *_bugFormViewController;
    FBAAdditionalFilesViewController *_filesViewController;
    FBASummaryViewController *_summaryViewController;
    FBASubmissionViewController *_submissionViewController;
    FBAFiler *_filer;
    unsigned long long _state;
    FBABugForm *_proposedBugForm;
    id _formResponseObserver;
}

@property(retain) id formResponseObserver; // @synthesize formResponseObserver=_formResponseObserver;
@property(retain) FBABugForm *proposedBugForm; // @synthesize proposedBugForm=_proposedBugForm;
@property BOOL isObserving; // @synthesize isObserving=_isObserving;
@property unsigned long long state; // @synthesize state=_state;
@property(retain) FBAFiler *filer; // @synthesize filer=_filer;
@property(retain) FBASubmissionViewController *submissionViewController; // @synthesize submissionViewController=_submissionViewController;
@property(retain) FBASummaryViewController *summaryViewController; // @synthesize summaryViewController=_summaryViewController;
@property(retain) FBAAdditionalFilesViewController *filesViewController; // @synthesize filesViewController=_filesViewController;
@property(retain) FBABugFormViewController *bugFormViewController; // @synthesize bugFormViewController=_bugFormViewController;
@property(retain) FBABugFormPickerViewController *bugFormPickerViewController; // @synthesize bugFormPickerViewController=_bugFormPickerViewController;
@property(retain) NSMutableSet *visitedPages; // @synthesize visitedPages=_visitedPages;
@property(retain) NSArray *pageViewControllers; // @synthesize pageViewControllers=_pageViewControllers;
@property(retain) NSViewController *currentViewController; // @synthesize currentViewController=_currentViewController;
@property __weak NSTextField *gatheringStatusText; // @synthesize gatheringStatusText=_gatheringStatusText;
@property __weak NSProgressIndicator *gatheringProgress; // @synthesize gatheringProgress=_gatheringProgress;
@property __weak NSButton *goBackButton; // @synthesize goBackButton=_goBackButton;
@property __weak NSButton *continueButton; // @synthesize continueButton=_continueButton;
@property __weak NSButton *changeFormButton; // @synthesize changeFormButton=_changeFormButton;
@property __weak NSView *pageContainerView; // @synthesize pageContainerView=_pageContainerView;
@property __weak NSTextField *titleLabel; // @synthesize titleLabel=_titleLabel;
@property __weak NSProgressIndicator *loadingSpinner; // @synthesize loadingSpinner=_loadingSpinner;
@property(retain) NSView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) NSPopover *bugFormPickerPopover; // @synthesize bugFormPickerPopover=_bugFormPickerPopover;
@property(retain, nonatomic) FBAOptOutWindowController *optOutWindowController; // @synthesize optOutWindowController=_optOutWindowController;
@property(retain, nonatomic) FBAPrivacyAlert *privacyNoticeWindowController; // @synthesize privacyNoticeWindowController=_privacyNoticeWindowController;
@property(copy) NSDictionary *prefillAttachments; // @synthesize prefillAttachments=_prefillAttachments;
@property(copy) NSDictionary *prefillTats; // @synthesize prefillTats=_prefillTats;
@property BOOL newResponse; // @synthesize newResponse=_newResponse;
@property(retain) id <FBAProjectEntity> projectContext; // @synthesize projectContext=_projectContext;
@property __weak id <FBADraftWindowDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) FBADraftingController *draftingController; // @synthesize draftingController=_draftingController;
- (void).cxx_destruct;
- (void)checkDirtyStateForCloseWithCompletion:(CDUnknownBlockType)arg1;
- (void)checkGatheringForCloseWithCompletion:(CDUnknownBlockType)arg1;
- (void)canCloseWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)tryToCloseWithCompletionHandler:(CDUnknownBlockType)arg1;
- (BOOL)windowShouldClose:(id)arg1;
- (void)windowWillClose:(id)arg1;
- (void)sizeAlertDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)didPresentErrorWithRecovery:(BOOL)arg1 contextInfo:(void *)arg2;
- (void)updateSummaryPane;
- (BOOL)allFilesAreValid;
- (BOOL)allQuestionsAreValid;
- (BOOL)allQuestionsAndFilesAreValid;
- (void)updateStatusForAllQuestions;
- (void)checkOptOutWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)checkPrivacyWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)checkAttachmentSizesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)performAllPresubmissionChecksWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)submissionDidFinishWithError:(id)arg1;
- (void)submissionDidSucceed;
- (void)beginSubmission;
- (void)kickOffPresubmission;
- (id)delegateFiler;
- (void)didActivateLinkForAdditional:(id)arg1;
- (void)didActivateLinkForRequirement:(id)arg1;
- (void)didActivateDeleteForResolvedQuestion:(id)arg1;
- (void)didActivateLinkForQuestion:(id)arg1;
- (void)hideGatheringSpinner;
- (void)setStatus:(id)arg1 inProgress:(BOOL)arg2;
- (void)filer:(id)arg1 isGathering:(unsigned long long)arg2;
- (void)updateNextPrevious;
- (void)goBack:(id)arg1;
- (void)goNext:(id)arg1;
- (void)didRequestChangeToBugForm:(id)arg1;
- (void)didClickChangeButton:(id)arg1;
- (void)help:(id)arg1;
- (void)saveResponse:(id)arg1;
- (BOOL)isSurveyController;
- (void)updateForWindowState;
- (void)updateChangeFormButton;
- (void)updateWindowTitle;
- (void)updateTitle;
- (void)_embedPageView:(id)arg1;
- (void)swapToViewController:(id)arg1;
- (void)bugFormPickerDidCommitSelection:(id)arg1;
- (void)bugFormPicker:(id)arg1 didSelectBugForm:(id)arg2;
- (void)draftingController:(id)arg1 madeVisibilityUpdates:(id)arg2;
- (void)questionVisiblityDidUpdateForDraftingController:(id)arg1;
- (void)draftingControllerDidFinishLoading:(id)arg1 withError:(id)arg2;
- (void)draftingControllerDidBeginLoading:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)stopObservingFormResponse;
- (void)startObservingFormResponse:(id)arg1;
- (void)stopObserving;
- (void)startObserving;
@property(readonly) FBABugForm *bugForm;
@property(readonly) FBAFormResponse *formResponse;
- (void)newResponseForCandidateProjects:(id)arg1;
- (void)newResponseForBugForm:(id)arg1;
- (void)editFormResponse:(id)arg1;
- (void)dealloc;
- (void)windowDidLoad;
- (void)_commonInit;
- (id)initWithWindowNibPath:(id)arg1 owner:(id)arg2;
- (id)initWithWindowNibName:(id)arg1 owner:(id)arg2;
- (id)initWithWindowNibName:(id)arg1;
- (id)initWithWindow:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


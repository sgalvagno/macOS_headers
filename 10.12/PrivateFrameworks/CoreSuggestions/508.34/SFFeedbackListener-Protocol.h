//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreSuggestions/NSObject-Protocol.h>

@class SFCardSectionEngagementFeedback, SFCardViewDisappearFeedback, SFClearInputFeedback, SFCustomFeedback, SFDidGoToSearchFeedback, SFDidGoToSiteFeedback, SFEndSearchFeedback, SFErrorFeedback, SFLateSectionsAppendedFeedback, SFRankingFeedback, SFResultEngagementFeedback, SFResultGradingFeedback, SFResultsReceivedAfterTimeoutFeedback, SFSearchViewAppearFeedback, SFSearchViewDisappearFeedback, SFSectionEngagementFeedback, SFStartSearchFeedback, SFSuggestionEngagementFeedback, SFVisibleResultsFeedback, SFVisibleSectionHeaderFeedback, SFVisibleSuggestionsFeedback;

@protocol SFFeedbackListener <NSObject>

@optional
- (void)didGoToSearch:(SFDidGoToSearchFeedback *)arg1;
- (void)didGoToSite:(SFDidGoToSiteFeedback *)arg1;
- (void)sectionHeaderDidBecomeVisible:(SFVisibleSectionHeaderFeedback *)arg1;
- (void)didEngageSection:(SFSectionEngagementFeedback *)arg1;
- (void)didClearInput:(SFClearInputFeedback *)arg1;
- (void)didAppendLateSections:(SFLateSectionsAppendedFeedback *)arg1;
- (void)didReceiveResultsAfterTimeout:(SFResultsReceivedAfterTimeoutFeedback *)arg1;
- (void)suggestionsDidBecomeVisible:(SFVisibleSuggestionsFeedback *)arg1;
- (void)resultsDidBecomeVisible:(SFVisibleResultsFeedback *)arg1;
- (void)sendCustomFeedback:(SFCustomFeedback *)arg1;
- (void)didErrorOccur:(SFErrorFeedback *)arg1;
- (void)didEngageCardSection:(SFCardSectionEngagementFeedback *)arg1;
- (void)didEngageSuggestion:(SFSuggestionEngagementFeedback *)arg1;
- (void)didGradeResultRelevancy:(SFResultGradingFeedback *)arg1;
- (void)didEngageResult:(SFResultEngagementFeedback *)arg1;
- (void)didRankSections:(SFRankingFeedback *)arg1;
- (void)didEndSearch:(SFEndSearchFeedback *)arg1;
- (void)didStartSearch:(SFStartSearchFeedback *)arg1;
- (void)cardViewDidDisappear:(SFCardViewDisappearFeedback *)arg1;
- (void)searchViewDidDisappear:(SFSearchViewDisappearFeedback *)arg1;
- (void)searchViewDidAppear:(SFSearchViewAppearFeedback *)arg1;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CalendarUI/CalUILayerBackedView.h>

#import <CalendarUI/CUIKSingleDayTimelineViewItem-Protocol.h>

@class CalDrawOccurrenceColor, CalDrawOccurrenceColorImage, CalUIBoxOccurrenceTextField, CalUIBoxOccurrenceTravelTimeView, CalUIRowView, EKEvent, NSDate, NSDictionary, NSLayoutConstraint, NSMutableArray, NSMutableDictionary, NSString;
@protocol CalUIBoxOccurrenceContentDelegate;

@interface CalUIBoxOccurrenceContentView : CalUILayerBackedView <CUIKSingleDayTimelineViewItem>
{
    BOOL _visibleHeightLocked;
    BOOL _showsAccountIcon;
    BOOL _showsStatusIcons;
    BOOL _showsLocation;
    BOOL _showsAttachmentIcon;
    BOOL _showsAttendeesIcon;
    BOOL _showsBirthdayIcon;
    BOOL _showsTravelTime;
    BOOL _hideTimeDueToOccurrenceStartingOnPreviousDay;
    BOOL _titleIsMultiLine;
    int _titleLayoutState;
    int _locationLayoutState;
    EKEvent *_event;
    id <CalUIBoxOccurrenceContentDelegate> _delegate;
    CalDrawOccurrenceColor *_color;
    CalDrawOccurrenceColorImage *_backgroundImage;
    CalUIBoxOccurrenceTextField *_timeField;
    CalUIBoxOccurrenceTextField *_startTimeField;
    CalUIBoxOccurrenceTextField *_endTimeField;
    CalUIBoxOccurrenceTextField *_titleField;
    CalUIBoxOccurrenceTextField *_locationField;
    CalUIBoxOccurrenceTravelTimeView *_travelTimeView;
    CalUILayerBackedView *_accountView;
    CalUIRowView *_statusView;
    CalUILayerBackedView *_attachmentView;
    CalUILayerBackedView *_attendeeView;
    CalUILayerBackedView *_topAlignmentView;
    NSString *_accountIconID;
    int *_attendeesStatus;
    double _currentFontSize;
    NSDictionary *_views;
    NSDictionary *_metrics;
    NSMutableDictionary *_cachedConstraints;
    NSLayoutConstraint *_constraintForCenteringTitle;
    NSLayoutConstraint *_constraintForCenteringAccount;
    NSLayoutConstraint *_constraintForCenteringStatus;
    NSLayoutConstraint *_constraintForTravelTimePosition;
    NSLayoutConstraint *_constraintForAccountVerticalOffsetFromTime;
    NSLayoutConstraint *_constraintForAccountVerticalOffsetFromTitle;
    NSLayoutConstraint *_constraintForAccountVerticalOffsetFromTop;
    NSLayoutConstraint *_constraintForPinningTopAlignmentViewToTop;
    NSLayoutConstraint *_constraintForPinningTopAlignmentViewToTravel;
    NSLayoutConstraint *_constraintForPushingDownTopAlignmentView;
    NSLayoutConstraint *_constraintForTitleInset;
    NSLayoutConstraint *_constraintForAccountInset;
    NSLayoutConstraint *_constraintForStatusInset;
    NSLayoutConstraint *_constraintForMinTitleHeight;
    NSLayoutConstraint *_constraintForMaxTitleHeight;
    NSLayoutConstraint *_constraintForMaxLocationHeight;
    NSMutableArray *_titleFieldConstraints;
    NSMutableArray *_locationFieldConstraints;
    NSMutableArray *_statusViewConstraintsInvolvingTitleField;
    NSMutableArray *_accountViewConstraintsInvolvingTitleField;
    double _visibleHeight;
    double _travelTimeHeight;
    struct CGSize _singleLineTitleSize;
}

+ (double)barToBarHorizontalDistanceIncludingBarWidth;
+ (id)aTextField;
@property(nonatomic) double travelTimeHeight; // @synthesize travelTimeHeight=_travelTimeHeight;
@property(nonatomic) double visibleHeight; // @synthesize visibleHeight=_visibleHeight;
@property(retain) NSMutableArray *accountViewConstraintsInvolvingTitleField; // @synthesize accountViewConstraintsInvolvingTitleField=_accountViewConstraintsInvolvingTitleField;
@property(retain) NSMutableArray *statusViewConstraintsInvolvingTitleField; // @synthesize statusViewConstraintsInvolvingTitleField=_statusViewConstraintsInvolvingTitleField;
@property(retain) NSMutableArray *locationFieldConstraints; // @synthesize locationFieldConstraints=_locationFieldConstraints;
@property(retain) NSMutableArray *titleFieldConstraints; // @synthesize titleFieldConstraints=_titleFieldConstraints;
@property(retain) NSLayoutConstraint *constraintForMaxLocationHeight; // @synthesize constraintForMaxLocationHeight=_constraintForMaxLocationHeight;
@property(retain) NSLayoutConstraint *constraintForMaxTitleHeight; // @synthesize constraintForMaxTitleHeight=_constraintForMaxTitleHeight;
@property(retain) NSLayoutConstraint *constraintForMinTitleHeight; // @synthesize constraintForMinTitleHeight=_constraintForMinTitleHeight;
@property(retain) NSLayoutConstraint *constraintForStatusInset; // @synthesize constraintForStatusInset=_constraintForStatusInset;
@property(retain) NSLayoutConstraint *constraintForAccountInset; // @synthesize constraintForAccountInset=_constraintForAccountInset;
@property(retain) NSLayoutConstraint *constraintForTitleInset; // @synthesize constraintForTitleInset=_constraintForTitleInset;
@property(retain) NSLayoutConstraint *constraintForPushingDownTopAlignmentView; // @synthesize constraintForPushingDownTopAlignmentView=_constraintForPushingDownTopAlignmentView;
@property(retain) NSLayoutConstraint *constraintForPinningTopAlignmentViewToTravel; // @synthesize constraintForPinningTopAlignmentViewToTravel=_constraintForPinningTopAlignmentViewToTravel;
@property(retain) NSLayoutConstraint *constraintForPinningTopAlignmentViewToTop; // @synthesize constraintForPinningTopAlignmentViewToTop=_constraintForPinningTopAlignmentViewToTop;
@property(retain) NSLayoutConstraint *constraintForAccountVerticalOffsetFromTop; // @synthesize constraintForAccountVerticalOffsetFromTop=_constraintForAccountVerticalOffsetFromTop;
@property(retain) NSLayoutConstraint *constraintForAccountVerticalOffsetFromTitle; // @synthesize constraintForAccountVerticalOffsetFromTitle=_constraintForAccountVerticalOffsetFromTitle;
@property(retain) NSLayoutConstraint *constraintForAccountVerticalOffsetFromTime; // @synthesize constraintForAccountVerticalOffsetFromTime=_constraintForAccountVerticalOffsetFromTime;
@property(retain) NSLayoutConstraint *constraintForTravelTimePosition; // @synthesize constraintForTravelTimePosition=_constraintForTravelTimePosition;
@property(retain) NSLayoutConstraint *constraintForCenteringStatus; // @synthesize constraintForCenteringStatus=_constraintForCenteringStatus;
@property(retain) NSLayoutConstraint *constraintForCenteringAccount; // @synthesize constraintForCenteringAccount=_constraintForCenteringAccount;
@property(retain) NSLayoutConstraint *constraintForCenteringTitle; // @synthesize constraintForCenteringTitle=_constraintForCenteringTitle;
@property(retain) NSMutableDictionary *cachedConstraints; // @synthesize cachedConstraints=_cachedConstraints;
@property(retain) NSDictionary *metrics; // @synthesize metrics=_metrics;
@property(retain) NSDictionary *views; // @synthesize views=_views;
@property double currentFontSize; // @synthesize currentFontSize=_currentFontSize;
@property BOOL titleIsMultiLine; // @synthesize titleIsMultiLine=_titleIsMultiLine;
@property BOOL hideTimeDueToOccurrenceStartingOnPreviousDay; // @synthesize hideTimeDueToOccurrenceStartingOnPreviousDay=_hideTimeDueToOccurrenceStartingOnPreviousDay;
@property int locationLayoutState; // @synthesize locationLayoutState=_locationLayoutState;
@property int titleLayoutState; // @synthesize titleLayoutState=_titleLayoutState;
@property int *attendeesStatus; // @synthesize attendeesStatus=_attendeesStatus;
@property(retain) NSString *accountIconID; // @synthesize accountIconID=_accountIconID;
@property BOOL showsTravelTime; // @synthesize showsTravelTime=_showsTravelTime;
@property BOOL showsBirthdayIcon; // @synthesize showsBirthdayIcon=_showsBirthdayIcon;
@property BOOL showsAttendeesIcon; // @synthesize showsAttendeesIcon=_showsAttendeesIcon;
@property BOOL showsAttachmentIcon; // @synthesize showsAttachmentIcon=_showsAttachmentIcon;
@property BOOL showsLocation; // @synthesize showsLocation=_showsLocation;
@property BOOL showsStatusIcons; // @synthesize showsStatusIcons=_showsStatusIcons;
@property BOOL showsAccountIcon; // @synthesize showsAccountIcon=_showsAccountIcon;
@property(retain) CalUILayerBackedView *topAlignmentView; // @synthesize topAlignmentView=_topAlignmentView;
@property(retain) CalUILayerBackedView *attendeeView; // @synthesize attendeeView=_attendeeView;
@property(retain) CalUILayerBackedView *attachmentView; // @synthesize attachmentView=_attachmentView;
@property(retain) CalUIRowView *statusView; // @synthesize statusView=_statusView;
@property(retain) CalUILayerBackedView *accountView; // @synthesize accountView=_accountView;
@property(retain) CalUIBoxOccurrenceTravelTimeView *travelTimeView; // @synthesize travelTimeView=_travelTimeView;
@property(retain) CalUIBoxOccurrenceTextField *locationField; // @synthesize locationField=_locationField;
@property(retain) CalUIBoxOccurrenceTextField *titleField; // @synthesize titleField=_titleField;
@property(retain) CalUIBoxOccurrenceTextField *endTimeField; // @synthesize endTimeField=_endTimeField;
@property(retain) CalUIBoxOccurrenceTextField *startTimeField; // @synthesize startTimeField=_startTimeField;
@property(retain) CalUIBoxOccurrenceTextField *timeField; // @synthesize timeField=_timeField;
@property(retain) CalDrawOccurrenceColorImage *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(retain) CalDrawOccurrenceColor *color; // @synthesize color=_color;
@property __weak id <CalUIBoxOccurrenceContentDelegate> delegate; // @synthesize delegate=_delegate;
@property BOOL visibleHeightLocked; // @synthesize visibleHeightLocked=_visibleHeightLocked;
@property struct CGSize singleLineTitleSize; // @synthesize singleLineTitleSize=_singleLineTitleSize;
@property(retain, nonatomic) EKEvent *event; // @synthesize event=_event;
- (void).cxx_destruct;
- (id)_accessibilityTimeFromDate:(id)arg1;
- (id)_accessibilityDateAndTimeFromDate:(id)arg1;
- (id)_accessibilityDateOnlyForStart:(id)arg1 end:(id)arg2;
- (id)_accessibilityTimeForStart:(id)arg1 end:(id)arg2 calendar:(id)arg3;
- (id)_accessibilityDateAndTimeForStart:(id)arg1 end:(id)arg2 calendar:(id)arg3;
- (id)_accessibilityLabelForAttendeesStatus:(int)arg1;
- (id)_accessibilityLabelForBoxOccurance;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (BOOL)accessibilityIsIgnored;
- (struct CGRect)stagedFrame;
- (void)setStagedFrame:(struct CGRect)arg1;
@property struct CGRect unPinnedViewFrame;
@property(readonly, nonatomic) double viewMaxNaturalTextHeight;
@property(readonly, nonatomic) double enoughHeightForOneLine;
@property(readonly, nonatomic) BOOL hideTravelTime;
@property(readonly, nonatomic) NSDate *end;
@property(readonly, nonatomic) NSDate *start;
@property(readonly, nonatomic) NSDate *startWithTravelTime;
- (BOOL)shouldDragCompletionProposeNewTime;
- (long long)myParticipantStatus;
- (BOOL)wantsTentativeAppearance;
- (id)timeZoneFont;
- (id)timeFont;
- (id)titleFont;
- (id)locationFont;
- (BOOL)isProposal;
- (BOOL)shouldAlwaysShowColorBar;
- (BOOL)shouldShowTime;
- (long long)backgroundStyle;
- (BOOL)occurrenceIsFirstVisibleDayOfEvent;
- (BOOL)shouldShowStartEndTime;
- (BOOL)shouldShowTravelTime;
- (BOOL)shouldInsetForEnclosingScrollView;
- (double)properYInDayGrid;
- (double)currentYInDayGrid;
- (BOOL)isDimmed;
- (BOOL)isSelected;
- (id)endDate;
- (id)startDate;
- (void)updateLayer;
- (id)tileOptions;
- (id)_attendeesIconForCurrentStatusWithOccurrenceColor:(id)arg1;
- (void)updateInsets;
- (void)_updateInsetsWithInnerBounds:(struct CGRect)arg1;
- (void)resetInsets;
- (void)viewDidMoveToSuperview;
- (double)sideBySideGracePeriodForFrame:(struct CGRect)arg1;
- (BOOL)titleOnFirstRowForFrame:(struct CGRect)arg1;
- (struct CGRect)_innerBoundsWithTravelTime:(BOOL)arg1;
- (id)firstTextField;
- (void)updateTravelTimeView;
- (BOOL)updateWithEvent:(id)arg1 rebuild:(BOOL)arg2;
- (BOOL)updateWithEvent:(id)arg1;
- (void)layout;
- (void)removeExistingTitleFieldConstraints;
- (void)removeExistingLocationFieldConstraints;
- (void)removeMaxLocationHeightConstraint;
- (void)addLocationConstraints:(id)arg1;
- (void)removeAccountConstraintsInvolvingTitle;
- (void)addAccountConstraintsInvolvingTitle:(id)arg1;
- (void)removeStatusConstraintsInvolvingTitle;
- (void)addStatusConstraintsInvolvingTitle:(id)arg1;
- (void)addTitleConstraints:(id)arg1;
- (void)addTitleFieldIfNeeded;
- (void)updateTravelTimeColors;
- (void)rebuildString;
- (struct CGColor *)newCurrentTextColor;
- (void)updateAccountIconVerticalPositionConstraint;
- (void)addOrRemoveAccountConstraints;
- (void)addConstraintsWithVisualFormat:(id)arg1 options:(unsigned long long)arg2;
- (id)constraintsWithVisualFormat:(id)arg1 options:(unsigned long long)arg2;
- (BOOL)wantsUpdateLayer;
@property(readonly, copy) NSString *description;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


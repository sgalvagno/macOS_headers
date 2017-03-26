//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, SGMContactOpportunityInSpotlight, SGMContactResultInSpotlight, SGMContactResultSelectedInSpotlight, SGMEventOpportunityInSpotlight, SGMEventResultInSpotlight, SGMEventResultSelectedInSpotlight, SGMNoResultSelectedInSpotlight, SGMOtherResultSelectedInSpotlight;

@interface SGSMutableSearchState : NSObject
{
    SGMContactOpportunityInSpotlight *_contactOpportunity;
    SGMEventOpportunityInSpotlight *_eventOpportunity;
    SGMContactResultInSpotlight *_contactResult;
    SGMEventResultInSpotlight *_eventResult;
    SGMContactResultSelectedInSpotlight *_contactSelected;
    SGMEventResultSelectedInSpotlight *_eventSelected;
    SGMNoResultSelectedInSpotlight *_noneSelected;
    SGMOtherResultSelectedInSpotlight *_otherSelected;
    unsigned short _contactResultCount;
    unsigned short _contactOpportunityCount;
    unsigned char _contactConversionCount;
    unsigned char _contactLossCount;
    unsigned short _curatedOrPseudoContactOpportunityCount;
    unsigned short _eventResultCount;
    unsigned short _eventOpportunityCount;
    unsigned char _eventConversionCount;
    unsigned char _eventLossCount;
    unsigned char _otherSelectedCount;
    unsigned char _nonOpportunityCount;
    BOOL _justEngaged;
    NSMutableSet *_resultsSeen;
}

- (void).cxx_destruct;
- (id)description;
- (void)commit;
- (BOOL)justEngaged;
- (void)resetJustEngaged;
- (void)setJustEngaged;
- (void)scoreAsEventLoss;
- (void)scoreAsEventConversion;
- (void)scoreAsEventOpportunity;
- (void)scoreAsEventResult;
- (void)scoreAsContactLoss;
- (void)scoreAsContactConversion;
- (void)scoreAsCuratedOrPseudoContactOpportunity;
- (void)scoreAsContactOpportunity;
- (void)scoreAsContactResult;
- (void)scoreAsOtherConversion;
- (void)scoreAsNonOpportunity;
- (void)resetCounts;
- (void)resetConversionCounts;
- (BOOL)isFirstTimeSeeingResult:(id)arg1;
- (id)init;

@end


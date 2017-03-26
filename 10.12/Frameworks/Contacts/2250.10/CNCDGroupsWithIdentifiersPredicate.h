//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Contacts/CNPredicate.h>

#import <Contacts/CNCDGroupPredicate-Protocol.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface CNCDGroupsWithIdentifiersPredicate : CNPredicate <CNCDGroupPredicate>
{
    NSArray *_identifiers;
}

+ (id)descriptionOfIdentifiers:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *identifiers; // @synthesize identifiers=_identifiers;
- (id)cn_coreDataPredicate;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithIdentifiers:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TextInputCore/TIUserAction.h>

@class TIAutocorrectionList;

@interface TICandidatesOfferedEvent : TIUserAction
{
    TIAutocorrectionList *_candidates;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) TIAutocorrectionList *candidates; // @synthesize candidates=_candidates;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCandidates:(id)arg1 keyboardState:(id)arg2;

@end


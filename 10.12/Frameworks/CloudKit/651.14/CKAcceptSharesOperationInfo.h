//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CloudKit/CKOperationInfo.h>

#import <CloudKit/NSSecureCoding-Protocol.h>

@class NSArray;

@interface CKAcceptSharesOperationInfo : CKOperationInfo <NSSecureCoding>
{
    NSArray *_shareMetadatasToAccept;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSArray *shareMetadatasToAccept; // @synthesize shareMetadatasToAccept=_shareMetadatasToAccept;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end


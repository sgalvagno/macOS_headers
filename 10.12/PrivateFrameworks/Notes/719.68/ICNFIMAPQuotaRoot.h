//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ICNFMCQuotaUsage, NSString;

@interface ICNFIMAPQuotaRoot : NSObject
{
    NSString *_name;
    ICNFMCQuotaUsage *_usage;
}

@property(retain) ICNFMCQuotaUsage *usage; // @synthesize usage=_usage;
@property(copy) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)setUsageFromResponse:(id)arg1;
- (id)description;
- (id)init;
- (id)initWithName:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CUIRenditionKey, NSString;

__attribute__((visibility("hidden")))
@interface CUINamedLookup : NSObject
{
    NSString *_name;
    CUIRenditionKey *_key;
    NSString *_signature;
    unsigned long long _storageRef;
    unsigned int _distilledInVersion;
    unsigned int _odContent:1;
}

@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (unsigned int)_distilledInVersion;
- (BOOL)isTintable;
- (void)setRepresentsOnDemandContent:(BOOL)arg1;
@property(readonly, nonatomic) BOOL representsOnDemandContent;
- (id)renditionKey;
- (id)renditionName;
- (id)_rendition;
- (id)_renditionForSpecificKey:(id)arg1;
- (void)dealloc;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)_cacheRenditionProperties;
- (id)initWithName:(id)arg1 usingRenditionKey:(id)arg2 fromTheme:(unsigned long long)arg3;

@end


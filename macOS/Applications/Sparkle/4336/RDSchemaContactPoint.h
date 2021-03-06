//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RDSchemaContent.h"

@class NSMutableArray, NSString;

@interface RDSchemaContactPoint : RDSchemaContent
{
    NSString *_contactType;
    NSString *_telephone;
    NSString *_fax;
    NSString *_email;
    NSMutableArray *_areaServed;
    NSMutableArray *_availableLanguage;
}

@property(retain, nonatomic) NSMutableArray *availableLanguage; // @synthesize availableLanguage=_availableLanguage;
@property(retain, nonatomic) NSMutableArray *areaServed; // @synthesize areaServed=_areaServed;
@property(retain, nonatomic) NSString *email; // @synthesize email=_email;
@property(retain, nonatomic) NSString *fax; // @synthesize fax=_fax;
@property(retain, nonatomic) NSString *telephone; // @synthesize telephone=_telephone;
@property(retain, nonatomic) NSString *contactType; // @synthesize contactType=_contactType;
- (void).cxx_destruct;
- (id)jsonObject;
- (void)removeAvailableLanguageAtIndex:(long long)arg1;
- (void)addAvailableLanguage:(id)arg1;
- (void)removeAreaServedAtIndex:(long long)arg1;
- (void)addAreaServed:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEmpty;
- (BOOL)isValid;
- (id)initWithContactType:(id)arg1 telephone:(id)arg2 fax:(id)arg3 email:(id)arg4 areaServed:(id)arg5 availableLanguage:(id)arg6;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end


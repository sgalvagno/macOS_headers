//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SGTNameExtractor : NSObject
{
    NSString *_storageString;
}

+ (id)formattedAddressWithName:(id)arg1 email:(id)arg2 useQuotes:(BOOL)arg3;
+ (id)partialSurnames;
+ (id)nameExtensionsThatDoNotNeedCommas;
+ (id)nameExtensions;
+ (id)extractorWithString:(id)arg1;
- (id)addressDomain;
- (id)searchStringComponents;
- (id)componentsSeparatedByCharactersRespectingQuotesAndParens:(id)arg1;
- (id)componentsSeparatedByCommaRespectingQuotesAndParens;
- (void)firstName:(id *)arg1 middleName:(id *)arg2 lastName:(id *)arg3 extension:(id *)arg4;
- (BOOL)firstNameShouldBeFirst;
- (id)addressComment;
- (id)uncommentedAddressRespectingGroups;
- (id)uncommentedAddress;
- (BOOL)appearsToBeAnInitial;
- (void)dealloc;

@end


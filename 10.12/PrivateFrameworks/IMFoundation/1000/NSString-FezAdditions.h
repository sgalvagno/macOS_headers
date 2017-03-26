//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (FezAdditions)
+ (id)generatedRoomNameForGroupChat;
+ (id)randomString;
+ (id)copyStringGUIDForObject:(id)arg1;
+ (id)stringGUIDForObject:(id)arg1;
+ (id)stringGUID;
+ (id)copyStringGUID;
- (BOOL)roomNameIsProbablyAutomaticallyGenerated;
- (id)stringByRemovingCharactersFromSet:(id)arg1;
- (id)stringWithLTREmbedding;
- (id)pathStringForDisplay;
- (id)__stringByStrippingAttachmentAndControlCharacters;
- (id)__stringByStrippingControlCharacters;
- (id)uniqueSavePath;
- (id)stringByRemovingWhitespace;
- (struct _NSRange)__rangeOfNewlineInRange:(struct _NSRange)arg1;
- (id)stringByResolvingAndStandardizingPath;
- (BOOL)_appearsToBeDSID;
- (BOOL)_appearsToBePhoneNumber;
- (id)_md5Hash;
- (id)_stripPotentialTokenURIWithToken:(id *)arg1;
- (BOOL)_appearsToBeEmail;
- (id)_IDFromFZIDType:(long long)arg1;
- (id)_URIFromFZIDType:(long long)arg1;
- (id)_URIFromCanonicalizedFZIDType:(long long)arg1;
- (long long)_FZBestGuessFZIDType;
- (id)_bestGuessURIFromCanicalizedID;
- (id)_URIFromCanonicalizedDSID;
- (id)_URIFromCanonicalizedPhoneNumber;
- (id)_URIFromCanonicalizedEmail;
- (id)_bestGuessURI;
- (id)_URIFromDSID;
- (id)_URIFromPhoneNumber;
- (id)_URIFromEmail;
- (long long)_FZIDType;
- (id)_FZIDFromPhoneNumber;
- (id)_FZIDFromEmail;
- (id)_stripFZIDPrefix;
- (id)urlFromString;
- (id)stringByAddingURLEscapes;
- (id)stringByRemovingURLEscapes;
- (id)trimmedString;
- (long long)localizedCompareToString:(id)arg1;
- (unsigned int)unsignedIntValue;
- (unsigned int)hexValue;
- (BOOL)isDirectory;
- (BOOL)isEqualToIgnoringCase:(id)arg1;
@end


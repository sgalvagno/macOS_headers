//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudPhotoServices/ICPDictionaryCoding-Protocol.h>

@class NSDate, NSDictionary, NSString, NSURL;

@interface ICPMyPhotoStreamMediaItem : NSObject <ICPDictionaryCoding>
{
    NSString *_identifier;
    NSURL *_url;
    NSString *_filename;
    NSString *_utiType;
    NSDate *_imageDate;
    NSDate *_fileModificationDate;
    NSString *_sourceLibraryIdentifier;
    NSString *_sourceContainerIdentifier;
    NSString *_sourceContainerDisplayName;
    NSString *_sourceVersionUuid;
    NSDictionary *_metadata;
    struct CGSize _size;
}

+ (void)_encodeSize:(struct CGSize)arg1 withDictionary:(id)arg2;
+ (struct CGSize)_sizeFromDictionary:(id)arg1;
@property(retain) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(retain) NSString *sourceVersionUuid; // @synthesize sourceVersionUuid=_sourceVersionUuid;
@property(retain) NSString *sourceContainerDisplayName; // @synthesize sourceContainerDisplayName=_sourceContainerDisplayName;
@property(retain) NSString *sourceContainerIdentifier; // @synthesize sourceContainerIdentifier=_sourceContainerIdentifier;
@property(retain) NSString *sourceLibraryIdentifier; // @synthesize sourceLibraryIdentifier=_sourceLibraryIdentifier;
@property(retain) NSDate *fileModificationDate; // @synthesize fileModificationDate=_fileModificationDate;
@property(retain) NSDate *imageDate; // @synthesize imageDate=_imageDate;
@property struct CGSize size; // @synthesize size=_size;
@property(retain) NSString *utiType; // @synthesize utiType=_utiType;
@property(retain) NSString *filename; // @synthesize filename=_filename;
@property(retain) NSURL *url; // @synthesize url=_url;
@property(retain) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)dictionaryRepresentation;
- (void)encodeWithDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithImageURL:(id)arg1 filename:(id)arg2 utiType:(id)arg3 size:(struct CGSize)arg4 imageDate:(id)arg5 fileModificationDate:(id)arg6 sourceLibraryIdentifier:(id)arg7 sourceContainerIdentifier:(id)arg8 sourceContainerDisplayName:(id)arg9 sourceVersionUuid:(id)arg10 metadata:(id)arg11;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


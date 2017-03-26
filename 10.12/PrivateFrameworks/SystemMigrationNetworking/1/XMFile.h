//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSNumber, NSString, NSURL;

@interface XMFile : NSObject
{
    NSString *_path;
    NSString *_owner;
    NSString *_compression;
    NSNumber *_length;
    NSNumber *_mode;
    NSData *_iconData;
    BOOL _endOfFile;
    NSURL *_localPath;
    NSString *_rawPath;
}

+ (id)endOfFile;
@property(retain) NSString *rawPath; // @synthesize rawPath=_rawPath;
@property(retain) NSURL *localPath; // @synthesize localPath=_localPath;
@property(readonly) NSData *iconData; // @synthesize iconData=_iconData;
@property(readonly) BOOL endOfFile; // @synthesize endOfFile=_endOfFile;
@property(readonly) NSString *compression; // @synthesize compression=_compression;
@property(readonly) NSString *owner; // @synthesize owner=_owner;
@property(readonly) NSNumber *mode; // @synthesize mode=_mode;
@property(readonly) NSNumber *length; // @synthesize length=_length;
@property(readonly) NSString *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (id)_numberForOctalString:(id)arg1;
@property(readonly) BOOL isDirectory;
- (id)description;
- (id)initWithDictionary:(id)arg1;
- (id)_initEOF;

@end


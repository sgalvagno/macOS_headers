//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "File.h"

@class NSScriptObjectSpecifier, PropertyListItem;

@interface PropertyListFile : File
{
    long long _format;
    PropertyListItem *_contents;
    id _container;
    NSScriptObjectSpecifier *_spoofObjectSpecifier;
}

- (void)setSpoofObjectSpecifier:(id)arg1;
- (id)spoofObjectSpecifier;
- (void)setContainer:(id)arg1;
- (id)privateContainer;
- (void)setContents:(id)arg1;
- (id)contents;
- (void)parse;
- (void)write:(id)arg1;
- (void)dealloc;
- (id)initPropertyListFileWithParent:(id)arg1 andURL:(id)arg2;
- (id)init;
- (id)objectSpecifier;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIFoundation/NSTextStorage.h>

@interface NSAttachmentTextStorage : NSTextStorage
{
    NSTextStorage *_realTS;
}

- (void)setUrl:(id)arg1;
- (id)url;
- (void)setFilename:(id)arg1;
- (id)filename;
- (void)setAttributes:(id)arg1 range:(struct _NSRange)arg2;
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withString:(id)arg2;
- (id)attributesAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;
- (id)string;
- (void)dealloc;
- (id)init;

@end


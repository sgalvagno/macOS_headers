//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WDAContent, WDDocument, WDText;

__attribute__((visibility("hidden")))
@interface WDATextBox : NSObject
{
    WDText *mText;
    unsigned long long mNextTextBoxId;
    _Bool mOle;
    WDDocument *mDocument;
    WDAContent *mParent;
}

- (id)description;
- (void)setNextTextBoxId:(unsigned long long)arg1;
- (unsigned long long)nextTextBoxId;
- (void)setText:(id)arg1;
- (id)text;
- (void)setParent:(id)arg1;
- (id)parent;
- (void)setOle:(BOOL)arg1;
- (BOOL)isOle;
- (void)setDocument:(id)arg1;
- (id)document;
- (void)dealloc;
- (id)init;

@end


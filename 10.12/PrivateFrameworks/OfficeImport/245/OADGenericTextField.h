//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <OfficeImport/OADTextField.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface OADGenericTextField : OADTextField
{
    NSString *_guid;
    NSString *_type;
}

@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *guid; // @synthesize guid=_guid;
- (BOOL)isSimilarToTextRun:(id)arg1;
- (void)dealloc;
- (id)initWithGuid:(id)arg1 type:(id)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ScreenReader/SCRStandardText.h>

__attribute__((visibility("hidden")))
@interface SCRXcodeTextElement : SCRStandardText
{
    BOOL __justInsertedSpaceOnEmptyLine;
}

@property(nonatomic) BOOL _justInsertedSpaceOnEmptyLine; // @synthesize _justInsertedSpaceOnEmptyLine=__justInsertedSpaceOnEmptyLine;
- (void)handleTextChangeWithUserInfo:(id)arg1;
- (void)handleTextSelectionChange;
- (void)_selectionDidChange:(id)arg1;

@end


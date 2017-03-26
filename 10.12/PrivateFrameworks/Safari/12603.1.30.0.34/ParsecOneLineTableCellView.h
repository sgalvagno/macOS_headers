//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Safari/UnifiedFieldCompletionStyledOneLineTableCellView.h>

#import <Safari/ParsecTableCellView-Protocol.h>

@class NSString;
@protocol ParsecTableCellViewDelegate;

__attribute__((visibility("hidden")))
@interface ParsecOneLineTableCellView : UnifiedFieldCompletionStyledOneLineTableCellView <ParsecTableCellView>
{
    NSString *_identifierOfDisplayedParsecResult;
    id <ParsecTableCellViewDelegate> _delegate;
    unsigned long long _configuredDescriptionAlignment;
}

@property(nonatomic) unsigned long long configuredDescriptionAlignment; // @synthesize configuredDescriptionAlignment=_configuredDescriptionAlignment;
@property(nonatomic) __weak id <ParsecTableCellViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *identifierOfDisplayedParsecResult; // @synthesize identifierOfDisplayedParsecResult=_identifierOfDisplayedParsecResult;
- (void).cxx_destruct;
- (id)identifier;
- (void)configureUsingCompletionListItem:(struct CompletionListItem *)arg1 session:(id)arg2;

@end


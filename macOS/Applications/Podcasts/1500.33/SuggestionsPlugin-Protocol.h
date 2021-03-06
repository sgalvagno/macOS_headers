//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BasePlugin-Protocol.h"

@protocol SuggestionsDataSource, SuggestionsDelegate;

@protocol SuggestionsPlugin <BasePlugin>
- (void)moveSelectionUp;
- (void)moveSelectionDown;
- (void)update;
- (void)close;
- (void)showFromRect:(struct CGRect)arg1;
@property(nonatomic, readonly) long long selectedRow;
@property(nonatomic) __weak id <SuggestionsDataSource> dataSource;
@property(nonatomic) __weak id <SuggestionsDelegate> delegate;
@end


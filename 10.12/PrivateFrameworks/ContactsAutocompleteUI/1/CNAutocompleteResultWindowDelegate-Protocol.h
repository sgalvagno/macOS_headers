//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ContactsAutocompleteUI/NSObject-Protocol.h>

@class CNAutocompleteResult, CNAutocompleteResultWindow, NSImage, NSString, NSView;

@protocol CNAutocompleteResultWindowDelegate <NSObject>

@optional
- (NSImage *)iconTypeForResult:(CNAutocompleteResult *)arg1 selected:(BOOL)arg2;
- (NSString *)addressStringForResult:(CNAutocompleteResult *)arg1;
- (NSString *)accountStringForResult:(CNAutocompleteResult *)arg1;
- (void)didSelectResult:(CNAutocompleteResult *)arg1;
- (NSString *)headerForNilPrefixResults;
- (NSString *)currentPrefix;
- (NSView *)viewForResult:(id)arg1;
- (void)selectionDidChange:(id)arg1;
- (void)selectedResult:(id)arg1;
- (void)autocompleteResultWindow:(CNAutocompleteResultWindow *)arg1 didSelectResult:(CNAutocompleteResult *)arg2;
@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface IJSVGStyleSheetSelector : NSObject
{
    unsigned long long _specificity;
    NSString *_selector;
    NSMutableArray *_rawSelectors;
}

@property(retain, nonatomic) NSMutableArray *rawSelectors; // @synthesize rawSelectors=_rawSelectors;
@property(retain, nonatomic) NSString *selector; // @synthesize selector=_selector;
@property(nonatomic) unsigned long long specificity; // @synthesize specificity=_specificity;
- (void).cxx_destruct;
- (BOOL)matchesNode:(id)arg1;
- (BOOL)_compile;
- (BOOL)validateSelector:(id)arg1;
- (void)_calculate;
- (id)initWithSelectorString:(id)arg1;
- (BOOL)_matches:(id)arg1 selector:(id)arg2;

@end


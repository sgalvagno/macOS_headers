//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class KHSelectionManager, NSArray;

@protocol KHSelectionObserver <NSObject>

@optional
- (void)selectionManager:(KHSelectionManager *)arg1 didRemoveSelections:(NSArray *)arg2;
- (void)selectionManager:(KHSelectionManager *)arg1 didModifySelections:(NSArray *)arg2;
- (void)selectionManager:(KHSelectionManager *)arg1 didTouchSelections:(NSArray *)arg2;
- (void)selectionManager:(KHSelectionManager *)arg1 didAddSelections:(NSArray *)arg2;
- (void)selectionManager:(KHSelectionManager *)arg1 willAddSelections:(NSArray *)arg2;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <FinderKit/FI_TRenameOperation.h>

__attribute__((visibility("hidden")))
@interface FI_TNewFolderOperation : FI_TRenameOperation
{
    _Bool _isRenaming;
}

- (int)createNewFolder:(const struct TString *)arg1 properties:(const struct TFENodePropertyList *)arg2;
- (void)reconfigureToRenameNodes:(const struct TFENodeVector *)arg1;
- (void)configureOperationRecord:(struct TOperationRecord *)arg1 forNode:(const struct TFENode *)arg2;
- (id)newDelegate;

@end


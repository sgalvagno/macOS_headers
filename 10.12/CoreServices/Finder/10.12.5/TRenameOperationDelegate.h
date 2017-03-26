//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TFileSystemOperationDelegate.h"

@interface TRenameOperationDelegate : TFileSystemOperationDelegate
{
    struct TString _newName;
    struct TriStateBool _extensionHiddenState;
}

+ (_Bool)isReservedName:(const struct TString *)arg1 syntaxHint:(const struct NodeNameSyntaxHint *)arg2;
+ (int)validateNewName:(const struct TString *)arg1 forNode:(const struct TFENode *)arg2 isDisplayName:(_Bool)arg3 allowInteraction:(_Bool)arg4;
- (id).cxx_construct;
- (void).cxx_destruct;
- (int)configureNewName:(struct TString *)arg1 forNode:(const struct TFENode *)arg2 isDisplayName:(_Bool)arg3 allowInteraction:(_Bool)arg4;
- (int)asyncNodeOperation:(id)arg1 subOperationCompleted:(unsigned int)arg2 targetNode:(const struct TFENode *)arg3;
- (int)asyncNodeOperation:(id)arg1 errorNotification:(const struct OperationMonitor *)arg2 error:(const struct OperationErrorRecord *)arg3 reply:(struct NodeEventReply *)arg4;
- (const struct TriStateBool *)extensionHiddenState;
- (const struct TString *)newName;

@end


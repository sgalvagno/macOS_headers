//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SystemMigration/SMCustomizeTree_Client.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSString, SMCustomizeTreeNode_Client;

@interface SMWindowsCustomizeTree_Client : SMCustomizeTree_Client
{
    BOOL _someUserNeedsToLogin;
    BOOL _customPathsSystemToSystemSizeFinal;
    BOOL _customPathsSystemToUserSizeFinal;
    SMCustomizeTreeNode_Client *settings;
    SMCustomizeTreeNode_Client *network;
    SMCustomizeTreeNode_Client *machine;
    SMCustomizeTreeNode_Client *root;
    NSString *migratableStateDescription;
    NSMutableArray *_otherDiskNodes;
    SMCustomizeTreeNode_Client *_users;
    SMCustomizeTreeNode_Client *_systemLevelComponents;
    SMCustomizeTreeNode_Client *_customPaths;
    NSMutableDictionary *_customPathsUserToUserSize;
    NSMutableDictionary *_customPathsUserToUserSizeFinal;
    NSMutableDictionary *_customPathsUserToSystemSize;
    NSMutableDictionary *_customPathsUserToSystemSizeFinal;
    unsigned long long _customPathsSystemToSystemSize;
    unsigned long long _customPathsSystemToUserSize;
    NSMutableArray *_userCustomPaths;
    NSArray *_transferredUsers;
}

@property(retain) NSArray *transferredUsers; // @synthesize transferredUsers=_transferredUsers;
@property(retain) NSMutableArray *userCustomPaths; // @synthesize userCustomPaths=_userCustomPaths;
@property BOOL customPathsSystemToUserSizeFinal; // @synthesize customPathsSystemToUserSizeFinal=_customPathsSystemToUserSizeFinal;
@property unsigned long long customPathsSystemToUserSize; // @synthesize customPathsSystemToUserSize=_customPathsSystemToUserSize;
@property BOOL customPathsSystemToSystemSizeFinal; // @synthesize customPathsSystemToSystemSizeFinal=_customPathsSystemToSystemSizeFinal;
@property unsigned long long customPathsSystemToSystemSize; // @synthesize customPathsSystemToSystemSize=_customPathsSystemToSystemSize;
@property(retain) NSMutableDictionary *customPathsUserToSystemSizeFinal; // @synthesize customPathsUserToSystemSizeFinal=_customPathsUserToSystemSizeFinal;
@property(retain) NSMutableDictionary *customPathsUserToSystemSize; // @synthesize customPathsUserToSystemSize=_customPathsUserToSystemSize;
@property(retain) NSMutableDictionary *customPathsUserToUserSizeFinal; // @synthesize customPathsUserToUserSizeFinal=_customPathsUserToUserSizeFinal;
@property(retain) NSMutableDictionary *customPathsUserToUserSize; // @synthesize customPathsUserToUserSize=_customPathsUserToUserSize;
@property(retain) SMCustomizeTreeNode_Client *customPaths; // @synthesize customPaths=_customPaths;
@property(retain) SMCustomizeTreeNode_Client *systemLevelComponents; // @synthesize systemLevelComponents=_systemLevelComponents;
@property(retain) SMCustomizeTreeNode_Client *users; // @synthesize users=_users;
@property BOOL someUserNeedsToLogin; // @synthesize someUserNeedsToLogin=_someUserNeedsToLogin;
@property(retain) NSMutableArray *otherDiskNodes; // @synthesize otherDiskNodes=_otherDiskNodes;
@property(retain) NSString *migratableStateDescription; // @synthesize migratableStateDescription;
@property(retain) SMCustomizeTreeNode_Client *root; // @synthesize root;
@property(retain) SMCustomizeTreeNode_Client *machine; // @synthesize machine;
@property(retain) SMCustomizeTreeNode_Client *network; // @synthesize network;
@property(retain) SMCustomizeTreeNode_Client *settings; // @synthesize settings;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)updateSize:(id)arg1 forComponentWithIdentifier:(id)arg2 sizeIsFinal:(BOOL)arg3;
- (void)recursivelyFindAndUpdateSize:(id)arg1 forComponentWithIdentifier:(id)arg2 fromNode:(id)arg3 sizeIsFinal:(BOOL)arg4;
- (void)sizeDeferredComponentsForNode:(id)arg1;
- (void)sizeDeferredComponents;
- (void)updateUserCustomPathsSize;
- (void)updateSytemCustomPathsSize;
- (void)sizingCompletedForCustomPathType:(unsigned long long)arg1 user:(id)arg2 withSize:(unsigned long long)arg3;
- (void)preliminarySizeForCustomPaths:(unsigned long long)arg1 type:(unsigned long long)arg2 user:(id)arg3;
- (void)sizingCompletedForComponent:(id)arg1 withSize:(unsigned long long)arg2;
- (void)preliminarySize:(unsigned long long)arg1 forComponent:(id)arg2;
- (id)appropriateUserNode;
- (void)recursivelyAddSelectedComponentsFromNode:(id)arg1 toArray:(id)arg2;
- (void)addOtherDiskComponentToTransfer:(id)arg1 toRequest:(id)arg2 forDiskNamed:(id)arg3;
- (void)addSystemComponentToTransfer:(id)arg1 toRequest:(id)arg2;
- (void)addUserToTransfer:(id)arg1 toRequest:(id)arg2 withSelectedComponents:(id)arg3;
- (id)migrationRequestWithFDEUser:(id)arg1 password:(id)arg2 andBag:(id)arg3;
- (BOOL)showCustomPaths;
- (void)addDisk:(id)arg1 toNode:(id)arg2;
- (void)addSubComponent:(id)arg1 toNode:(id)arg2 select:(BOOL)arg3;
- (void)addUser:(id)arg1 isAlreadyTransferred:(BOOL)arg2;
- (void)addUsers:(id)arg1;
- (void)beginAsynchronousSizing;
- (void)tearDown;
- (void)generateTree:(BOOL)arg1;
- (BOOL)rebootRequired;
- (id)initWithTransferredUsers:(id)arg1 sourceSystem:(id)arg2 targetSystem:(id)arg3;

@end


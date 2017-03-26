//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ExchangeWebServices/EWSBaseRequestType.h>

@class EWSBasePagingType, EWSFolderResponseShapeType, EWSRestrictionType, NSArray;

@interface EWSFindFolderType : EWSBaseRequestType
{
    EWSFolderResponseShapeType *_FolderShape;
    EWSBasePagingType *_Paging;
    EWSRestrictionType *_Restriction;
    NSArray *_ParentFolderIds;
    long long _Traversal;
}

+ (id)definition;
@property(nonatomic) long long Traversal; // @synthesize Traversal=_Traversal;
@property(copy, nonatomic) NSArray *ParentFolderIds; // @synthesize ParentFolderIds=_ParentFolderIds;
@property(retain, nonatomic) EWSRestrictionType *Restriction; // @synthesize Restriction=_Restriction;
@property(retain, nonatomic) EWSBasePagingType *Paging; // @synthesize Paging=_Paging;
@property(retain, nonatomic) EWSFolderResponseShapeType *FolderShape; // @synthesize FolderShape=_FolderShape;
- (void).cxx_destruct;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ExchangeWebServices/EWSBaseRequestType.h>

@class EWSFolderResponseShapeType, NSArray;

@interface EWSGetFolderType : EWSBaseRequestType
{
    EWSFolderResponseShapeType *_FolderShape;
    NSArray *_FolderIds;
}

+ (id)definition;
@property(copy, nonatomic) NSArray *FolderIds; // @synthesize FolderIds=_FolderIds;
@property(retain, nonatomic) EWSFolderResponseShapeType *FolderShape; // @synthesize FolderShape=_FolderShape;
- (void).cxx_destruct;

@end


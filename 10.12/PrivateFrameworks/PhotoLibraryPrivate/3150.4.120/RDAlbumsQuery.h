//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotoLibraryPrivate/RDCollectionsQuery.h>

@interface RDAlbumsQuery : RDCollectionsQuery
{
}

+ (id)filterResultsTableInDatabase:(id)arg1;
+ (id)albumsQueryForBuiltinAlbumsInDatabase:(id)arg1 options:(id)arg2;
+ (id)albumsQueryForKeepsakeAlbumsInDatabase:(id)arg1 options:(id)arg2;
+ (id)albumsQueryWithType:(long long)arg1 albumSubclasses:(id)arg2 containingFolder:(id)arg3 database:(id)arg4 options:(id)arg5;

@end


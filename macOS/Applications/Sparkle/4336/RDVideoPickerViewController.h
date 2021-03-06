//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

@class CNGridView, NSMutableArray, NSProgressIndicator, NSSearchField, NSString, RDURLConnection, RDVideoURLParser;

@interface RDVideoPickerViewController : NSViewController
{
    BOOL _searching;
    CNGridView *_gridView;
    NSProgressIndicator *_activityIndicator;
    NSSearchField *_searchField;
    CDUnknownBlockType _changeVideo;
    NSMutableArray *_videos;
    NSMutableArray *_searchQueue;
    long long _videoCount;
    long long _currentSource;
    NSString *_currentSearchTerms;
    RDURLConnection *_search;
    id _currentPage;
    id _nextPage;
    long long _shouldSearch;
    NSString *_lastSearch;
    RDVideoURLParser *_videoURLParser;
}

@property(retain, nonatomic) RDVideoURLParser *videoURLParser; // @synthesize videoURLParser=_videoURLParser;
@property(nonatomic) BOOL searching; // @synthesize searching=_searching;
@property(retain, nonatomic) NSString *lastSearch; // @synthesize lastSearch=_lastSearch;
@property(nonatomic) long long shouldSearch; // @synthesize shouldSearch=_shouldSearch;
@property(retain, nonatomic) id nextPage; // @synthesize nextPage=_nextPage;
@property(retain, nonatomic) id currentPage; // @synthesize currentPage=_currentPage;
@property(retain, nonatomic) RDURLConnection *search; // @synthesize search=_search;
@property(retain, nonatomic) NSString *currentSearchTerms; // @synthesize currentSearchTerms=_currentSearchTerms;
@property(nonatomic) long long currentSource; // @synthesize currentSource=_currentSource;
@property(nonatomic) long long videoCount; // @synthesize videoCount=_videoCount;
@property(retain, nonatomic) NSMutableArray *searchQueue; // @synthesize searchQueue=_searchQueue;
@property(retain, nonatomic) NSMutableArray *videos; // @synthesize videos=_videos;
@property(copy, nonatomic) CDUnknownBlockType changeVideo; // @synthesize changeVideo=_changeVideo;
@property(nonatomic) __weak NSSearchField *searchField; // @synthesize searchField=_searchField;
@property(nonatomic) __weak NSProgressIndicator *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(nonatomic) __weak CNGridView *gridView; // @synthesize gridView=_gridView;
- (void).cxx_destruct;
- (void)gridView:(id)arg1 didSelectItemAtIndex:(unsigned long long)arg2 inSection:(unsigned long long)arg3;
- (id)gridView:(id)arg1 itemAtIndex:(long long)arg2 inSection:(long long)arg3;
- (unsigned long long)gridView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)parse:(id)arg1 source:(long long)arg2;
- (void)produceURLForQuery:(id)arg1 source:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)doSearch:(id)arg1;
- (void)searchVideosDelayed;
- (void)searchVideos:(id)arg1;
- (void)awakeFromNib;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 source:(long long)arg3;

@end


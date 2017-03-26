//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ParsecUI/PRSResult.h>

#import <ParsecUI/NSCoding-Protocol.h>
#import <ParsecUI/NSSecureCoding-Protocol.h>
#import <ParsecUI/PRSBaseResult-Protocol.h>

@class NSDictionary, NSImage, NSNumber, NSString, NSURL, SFPunchout, SFSearchResult;

@interface PRSParsecResult : PRSResult <PRSBaseResult, NSCoding, NSSecureCoding>
{
    NSString *_category;
    BOOL isStreaming;
    BOOL isQuickGlance;
    BOOL _hasBeenAnimated;
    BOOL _enablePlayButton;
    int title_note_size;
    float resultScore;
    NSString *type;
    NSString *title;
    NSString *title_note;
    NSImage *icon;
    NSString *section_header;
    NSString *section_header_more;
    NSURL *section_header_more_url;
    unsigned long long engagementScore;
    unsigned long long queryIndependentScore;
    unsigned long long topHit;
    unsigned long long score;
    unsigned long long rank;
    NSString *resultIdentifier;
    NSString *completion;
    NSImage *completion_icon;
    long long max_age;
    SFPunchout *punchout;
    NSString *bundle_id;
    long long adam_id;
    NSString *templateName;
    NSString *resultBundleID;
    NSString *fbr;
    NSString *_sourceDisplayName;
    NSURL *_url;
    NSNumber *_groupId;
    NSString *_textContent;
    NSString *_keyWordContent;
    NSString *_headerDisplayName;
}

+ (id)sortedArray:(id)arg1;
+ (void)initialize;
+ (id)convertSFSearchResult:(id)arg1;
+ (id)createGenericResultFromSearchFoundation:(id)arg1;
+ (id)createMapsResultFromSearchFoundation:(id)arg1;
+ (id)createSimpleResultFromSearchFoundation:(id)arg1;
+ (id)convertCardSectionsForSFSearchResult:(id)arg1;
+ (id)convertSFSearchResult:(id)arg1 cardSection:(id)arg2;
+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSString *headerDisplayName; // @synthesize headerDisplayName=_headerDisplayName;
@property BOOL enablePlayButton; // @synthesize enablePlayButton=_enablePlayButton;
@property BOOL hasBeenAnimated; // @synthesize hasBeenAnimated=_hasBeenAnimated;
@property(readonly) NSString *keyWordContent; // @synthesize keyWordContent=_keyWordContent;
@property(readonly) NSString *textContent; // @synthesize textContent=_textContent;
@property(readonly) NSNumber *groupId; // @synthesize groupId=_groupId;
@property(retain) NSURL *url; // @synthesize url=_url;
@property(readonly) NSString *sourceDisplayName; // @synthesize sourceDisplayName=_sourceDisplayName;
@property(retain, nonatomic) NSString *fbr; // @synthesize fbr;
@property BOOL isQuickGlance; // @synthesize isQuickGlance;
@property(retain, nonatomic) NSString *resultBundleID; // @synthesize resultBundleID;
@property(retain, nonatomic) NSString *templateName; // @synthesize templateName;
@property(nonatomic) BOOL isStreaming; // @synthesize isStreaming;
@property(nonatomic) long long adam_id; // @synthesize adam_id;
@property(retain, nonatomic) NSString *bundle_id; // @synthesize bundle_id;
@property(retain, nonatomic) SFPunchout *punchout; // @synthesize punchout;
@property(nonatomic) long long max_age; // @synthesize max_age;
@property(retain, nonatomic) NSImage *completion_icon; // @synthesize completion_icon;
@property(retain, nonatomic) NSString *completion; // @synthesize completion;
@property(retain, nonatomic) NSString *resultIdentifier; // @synthesize resultIdentifier;
@property(nonatomic) unsigned long long rank; // @synthesize rank;
@property(nonatomic) unsigned long long score; // @synthesize score;
@property(nonatomic) unsigned long long topHit; // @synthesize topHit;
@property(nonatomic) unsigned long long queryIndependentScore; // @synthesize queryIndependentScore;
@property(nonatomic) unsigned long long engagementScore; // @synthesize engagementScore;
@property(nonatomic) float resultScore; // @synthesize resultScore;
@property(retain, nonatomic) NSURL *section_header_more_url; // @synthesize section_header_more_url;
@property(retain, nonatomic) NSString *section_header_more; // @synthesize section_header_more;
@property(retain, nonatomic) NSString *section_header; // @synthesize section_header;
@property(retain, nonatomic) NSImage *icon; // @synthesize icon;
@property int title_note_size; // @synthesize title_note_size;
@property(retain, nonatomic) NSString *title_note; // @synthesize title_note;
@property(retain, nonatomic) NSString *title;
@property(retain, nonatomic) NSString *type;
- (void).cxx_destruct;
@property(retain, nonatomic) NSURL *resultURL;
- (BOOL)utiTypeConformsTo:(id)arg1;
- (id)rows;
- (BOOL)isLocalResult;
- (id)category;
@property(readonly) BOOL isLegacyWikipediaType;
@property(readonly) BOOL isTweet;
@property(readonly) BOOL isMoviesNearby;
@property(readonly) BOOL isMovieNearby;
@property(readonly) BOOL isMaps;
- (BOOL)isAudio;
- (BOOL)isVideo;
- (BOOL)isWebVideo;
@property(readonly) BOOL isArtist;
@property(readonly) BOOL isTVEpisode;
@property(readonly) BOOL isSoftware;
@property(readonly) BOOL isiPadSoftware;
@property(readonly) BOOL isEbook;
@property(readonly) BOOL isSong;
@property(readonly) BOOL isMusicVideo;
@property(readonly) BOOL isFeatureFilm;
@property(readonly) BOOL isAlbum;
@property(readonly) BOOL isiTunesType;
@property(readonly) BOOL isMovie;
@property(readonly) BOOL isTV;
@property(readonly) BOOL isNews;
@property(readonly) BOOL isWikipedia;
@property(readonly) BOOL isGenericType;
@property(readonly) BOOL isSimpleType;
@property(readonly, copy) NSString *description;
@property(readonly) NSURL *URL;
- (void)_setRank:(unsigned long long)arg1;
- (void)_setScore:(unsigned long long)arg1;
- (id)thumbnail;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(retain, nonatomic) NSString *groupName;
- (id)initWithResult:(id)arg1;
- (id)displayName;
- (id)initWithContentType:(id)arg1 displayName:(id)arg2;
- (void)_setCategory:(id)arg1;
- (id)previewFeedbackForInput:(id)arg1 timestamp:(long long)arg2;
- (id)newCustomPreviewController;
- (id)sharedCustomPreviewController;

// Remaining properties
@property(nonatomic) unsigned long long alternateNameMatchScore;
@property(retain, nonatomic) NSString *bundleID;
@property(retain, nonatomic) NSString *categoryForCP;
@property(nonatomic) unsigned long long contentMatchScore;
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) unsigned long long displayNameMatchScore;
@property(nonatomic) BOOL doesContentMatch;
@property(retain, nonatomic) NSDictionary *featuresSet;
@property(retain, nonatomic) NSString *geoUserSessionIDString;
@property(nonatomic) double geoUserSessionStartTime;
@property(readonly) unsigned long long hash;
@property(nonatomic) unsigned long long interestingTimeScore;
@property(nonatomic) BOOL isAlternateNameMatch;
@property(nonatomic) BOOL isDisplayNameMatch;
@property(nonatomic) BOOL isEngagedWith;
@property(nonatomic) BOOL isMostRecentlyUsed;
@property(nonatomic) BOOL isParsec;
@property(nonatomic) BOOL isParsecTopHit;
@property(nonatomic) BOOL isPredictedTopHit;
@property(nonatomic) BOOL isPremium;
@property(nonatomic) BOOL isStaticTopHit;
@property(nonatomic) BOOL isUsed;
@property(nonatomic) BOOL keyWordMatch;
@property(nonatomic) double lastUsedTime;
@property(nonatomic) long long media_kind;
@property(nonatomic) long long placement;
@property(nonatomic) BOOL playable;
@property(nonatomic) unsigned long long predicted;
@property(nonatomic) BOOL queryEverLaunched;
@property(nonatomic) BOOL queryLastLaunched;
@property(nonatomic) unsigned long long resultEngagementScore;
@property(nonatomic) BOOL resultLocationInteresting;
@property(retain, nonatomic) SFSearchResult *sfSearchResult;
@property(readonly) Class superclass;
@property long long topHitScore;
@property(nonatomic) unsigned long long usedCount;

@end


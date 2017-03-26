//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

@class NSData, NSString;

@interface _MRContentItemMetadataProtobuf : PBCodable <NSCopying>
{
    double _duration;
    double _elapsedTime;
    long long _iTunesAlbumIdentifier;
    long long _iTunesArtistIdentifier;
    long long _iTunesIdentifier;
    long long _iTunesSubscriptionIdentifier;
    long long _radioStationIdentifier;
    double _releaseDate;
    double _startTime;
    NSString *_albumArtistName;
    NSString *_albumName;
    NSData *_appMetricsData;
    NSString *_artworkMIMEType;
    NSString *_assetURL;
    int _chapterCount;
    NSString *_collectionIdentifier;
    NSString *_composer;
    NSString *_contentIdentifier;
    float _defaultPlaybackRate;
    NSString *_directorName;
    int _discNumber;
    float _downloadProgress;
    int _downloadState;
    int _editingStyleFlags;
    int _episodeNumber;
    NSString *_genre;
    NSString *_localizedContentRating;
    int _mediaSubType;
    int _mediaType;
    NSData *_nowPlayingInfo;
    int _numberOfSections;
    int _playCount;
    float _playbackProgress;
    float _playbackRate;
    int _playlistType;
    NSString *_profileIdentifier;
    NSData *_purchaseInfoData;
    NSString *_radioStationHash;
    NSString *_radioStationName;
    NSString *_radioStationString;
    int _radioStationType;
    int _seasonNumber;
    NSString *_seriesName;
    NSString *_subtitle;
    NSString *_title;
    int _totalDiscCount;
    int _totalTrackCount;
    NSString *_trackArtistName;
    int _trackNumber;
    BOOL _artworkAvailable;
    BOOL _infoAvailable;
    BOOL _isAdvertisement;
    BOOL _isAlwaysLive;
    BOOL _isBanned;
    BOOL _isContainer;
    BOOL _isCurrentlyPlaying;
    BOOL _isExplicitItem;
    BOOL _isInWishList;
    BOOL _isLiked;
    BOOL _isPlayable;
    BOOL _isSharable;
    BOOL _isStreamingContent;
    BOOL _languageOptionsAvailable;
    BOOL _lyricsAvailable;
    struct {
        unsigned int duration:1;
        unsigned int elapsedTime:1;
        unsigned int iTunesAlbumIdentifier:1;
        unsigned int iTunesArtistIdentifier:1;
        unsigned int iTunesIdentifier:1;
        unsigned int iTunesSubscriptionIdentifier:1;
        unsigned int radioStationIdentifier:1;
        unsigned int releaseDate:1;
        unsigned int startTime:1;
        unsigned int chapterCount:1;
        unsigned int defaultPlaybackRate:1;
        unsigned int discNumber:1;
        unsigned int downloadProgress:1;
        unsigned int downloadState:1;
        unsigned int editingStyleFlags:1;
        unsigned int episodeNumber:1;
        unsigned int mediaSubType:1;
        unsigned int mediaType:1;
        unsigned int numberOfSections:1;
        unsigned int playCount:1;
        unsigned int playbackProgress:1;
        unsigned int playbackRate:1;
        unsigned int playlistType:1;
        unsigned int radioStationType:1;
        unsigned int seasonNumber:1;
        unsigned int totalDiscCount:1;
        unsigned int totalTrackCount:1;
        unsigned int trackNumber:1;
        unsigned int artworkAvailable:1;
        unsigned int infoAvailable:1;
        unsigned int isAdvertisement:1;
        unsigned int isAlwaysLive:1;
        unsigned int isBanned:1;
        unsigned int isContainer:1;
        unsigned int isCurrentlyPlaying:1;
        unsigned int isExplicitItem:1;
        unsigned int isInWishList:1;
        unsigned int isLiked:1;
        unsigned int isPlayable:1;
        unsigned int isSharable:1;
        unsigned int isStreamingContent:1;
        unsigned int languageOptionsAvailable:1;
        unsigned int lyricsAvailable:1;
    } _has;
}

@property(retain, nonatomic) NSData *nowPlayingInfo; // @synthesize nowPlayingInfo=_nowPlayingInfo;
@property(nonatomic) int mediaSubType; // @synthesize mediaSubType=_mediaSubType;
@property(nonatomic) int mediaType; // @synthesize mediaType=_mediaType;
@property(retain, nonatomic) NSString *seriesName; // @synthesize seriesName=_seriesName;
@property(retain, nonatomic) NSData *appMetricsData; // @synthesize appMetricsData=_appMetricsData;
@property(nonatomic) float downloadProgress; // @synthesize downloadProgress=_downloadProgress;
@property(nonatomic) int downloadState; // @synthesize downloadState=_downloadState;
@property(nonatomic) float defaultPlaybackRate; // @synthesize defaultPlaybackRate=_defaultPlaybackRate;
@property(retain, nonatomic) NSData *purchaseInfoData; // @synthesize purchaseInfoData=_purchaseInfoData;
@property(nonatomic) long long iTunesAlbumIdentifier; // @synthesize iTunesAlbumIdentifier=_iTunesAlbumIdentifier;
@property(nonatomic) long long iTunesArtistIdentifier; // @synthesize iTunesArtistIdentifier=_iTunesArtistIdentifier;
@property(nonatomic) long long iTunesSubscriptionIdentifier; // @synthesize iTunesSubscriptionIdentifier=_iTunesSubscriptionIdentifier;
@property(nonatomic) long long iTunesIdentifier; // @synthesize iTunesIdentifier=_iTunesIdentifier;
@property(retain, nonatomic) NSString *radioStationString; // @synthesize radioStationString=_radioStationString;
@property(retain, nonatomic) NSString *radioStationName; // @synthesize radioStationName=_radioStationName;
@property(retain, nonatomic) NSString *radioStationHash; // @synthesize radioStationHash=_radioStationHash;
@property(nonatomic) long long radioStationIdentifier; // @synthesize radioStationIdentifier=_radioStationIdentifier;
@property(nonatomic) BOOL isInWishList; // @synthesize isInWishList=_isInWishList;
@property(nonatomic) BOOL isLiked; // @synthesize isLiked=_isLiked;
@property(nonatomic) BOOL isBanned; // @synthesize isBanned=_isBanned;
@property(nonatomic) BOOL isSharable; // @synthesize isSharable=_isSharable;
@property(nonatomic) BOOL isAdvertisement; // @synthesize isAdvertisement=_isAdvertisement;
@property(retain, nonatomic) NSString *contentIdentifier; // @synthesize contentIdentifier=_contentIdentifier;
@property(nonatomic) int trackNumber; // @synthesize trackNumber=_trackNumber;
@property(nonatomic) int totalTrackCount; // @synthesize totalTrackCount=_totalTrackCount;
@property(nonatomic) int totalDiscCount; // @synthesize totalDiscCount=_totalDiscCount;
@property(nonatomic) int chapterCount; // @synthesize chapterCount=_chapterCount;
@property(nonatomic) float playbackRate; // @synthesize playbackRate=_playbackRate;
@property(nonatomic) BOOL isAlwaysLive; // @synthesize isAlwaysLive=_isAlwaysLive;
@property(retain, nonatomic) NSString *genre; // @synthesize genre=_genre;
@property(nonatomic) double elapsedTime; // @synthesize elapsedTime=_elapsedTime;
@property(nonatomic) int discNumber; // @synthesize discNumber=_discNumber;
@property(retain, nonatomic) NSString *composer; // @synthesize composer=_composer;
@property(retain, nonatomic) NSString *assetURL; // @synthesize assetURL=_assetURL;
@property(retain, nonatomic) NSString *artworkMIMEType; // @synthesize artworkMIMEType=_artworkMIMEType;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSString *profileIdentifier; // @synthesize profileIdentifier=_profileIdentifier;
@property(retain, nonatomic) NSString *collectionIdentifier; // @synthesize collectionIdentifier=_collectionIdentifier;
@property(nonatomic) BOOL isCurrentlyPlaying; // @synthesize isCurrentlyPlaying=_isCurrentlyPlaying;
@property(nonatomic) BOOL isStreamingContent; // @synthesize isStreamingContent=_isStreamingContent;
@property(nonatomic) int editingStyleFlags; // @synthesize editingStyleFlags=_editingStyleFlags;
@property(nonatomic) BOOL lyricsAvailable; // @synthesize lyricsAvailable=_lyricsAvailable;
@property(nonatomic) int numberOfSections; // @synthesize numberOfSections=_numberOfSections;
@property(nonatomic) BOOL languageOptionsAvailable; // @synthesize languageOptionsAvailable=_languageOptionsAvailable;
@property(nonatomic) BOOL infoAvailable; // @synthesize infoAvailable=_infoAvailable;
@property(nonatomic) BOOL artworkAvailable; // @synthesize artworkAvailable=_artworkAvailable;
@property(nonatomic) int radioStationType; // @synthesize radioStationType=_radioStationType;
@property(nonatomic) int playlistType; // @synthesize playlistType=_playlistType;
@property(nonatomic) BOOL isExplicitItem; // @synthesize isExplicitItem=_isExplicitItem;
@property(retain, nonatomic) NSString *localizedContentRating; // @synthesize localizedContentRating=_localizedContentRating;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) int playCount; // @synthesize playCount=_playCount;
@property(nonatomic) double releaseDate; // @synthesize releaseDate=_releaseDate;
@property(nonatomic) int episodeNumber; // @synthesize episodeNumber=_episodeNumber;
@property(nonatomic) int seasonNumber; // @synthesize seasonNumber=_seasonNumber;
@property(retain, nonatomic) NSString *directorName; // @synthesize directorName=_directorName;
@property(retain, nonatomic) NSString *albumArtistName; // @synthesize albumArtistName=_albumArtistName;
@property(retain, nonatomic) NSString *trackArtistName; // @synthesize trackArtistName=_trackArtistName;
@property(retain, nonatomic) NSString *albumName; // @synthesize albumName=_albumName;
@property(nonatomic) float playbackProgress; // @synthesize playbackProgress=_playbackProgress;
@property(nonatomic) BOOL isPlayable; // @synthesize isPlayable=_isPlayable;
@property(nonatomic) BOOL isContainer; // @synthesize isContainer=_isContainer;
@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasNowPlayingInfo;
@property(nonatomic) BOOL hasMediaSubType;
@property(nonatomic) BOOL hasMediaType;
@property(readonly, nonatomic) BOOL hasSeriesName;
@property(readonly, nonatomic) BOOL hasAppMetricsData;
@property(nonatomic) BOOL hasDownloadProgress;
@property(nonatomic) BOOL hasDownloadState;
@property(nonatomic) BOOL hasDefaultPlaybackRate;
@property(readonly, nonatomic) BOOL hasPurchaseInfoData;
@property(nonatomic) BOOL hasITunesAlbumIdentifier;
@property(nonatomic) BOOL hasITunesArtistIdentifier;
@property(nonatomic) BOOL hasITunesSubscriptionIdentifier;
@property(nonatomic) BOOL hasITunesIdentifier;
@property(readonly, nonatomic) BOOL hasRadioStationString;
@property(readonly, nonatomic) BOOL hasRadioStationName;
@property(readonly, nonatomic) BOOL hasRadioStationHash;
@property(nonatomic) BOOL hasRadioStationIdentifier;
@property(nonatomic) BOOL hasIsInWishList;
@property(nonatomic) BOOL hasIsLiked;
@property(nonatomic) BOOL hasIsBanned;
@property(nonatomic) BOOL hasIsSharable;
@property(nonatomic) BOOL hasIsAdvertisement;
@property(readonly, nonatomic) BOOL hasContentIdentifier;
@property(nonatomic) BOOL hasTrackNumber;
@property(nonatomic) BOOL hasTotalTrackCount;
@property(nonatomic) BOOL hasTotalDiscCount;
@property(nonatomic) BOOL hasChapterCount;
@property(nonatomic) BOOL hasPlaybackRate;
@property(nonatomic) BOOL hasIsAlwaysLive;
@property(readonly, nonatomic) BOOL hasGenre;
@property(nonatomic) BOOL hasElapsedTime;
@property(nonatomic) BOOL hasDiscNumber;
@property(readonly, nonatomic) BOOL hasComposer;
@property(readonly, nonatomic) BOOL hasAssetURL;
@property(readonly, nonatomic) BOOL hasArtworkMIMEType;
@property(nonatomic) BOOL hasStartTime;
@property(readonly, nonatomic) BOOL hasProfileIdentifier;
@property(readonly, nonatomic) BOOL hasCollectionIdentifier;
@property(nonatomic) BOOL hasIsCurrentlyPlaying;
@property(nonatomic) BOOL hasIsStreamingContent;
@property(nonatomic) BOOL hasEditingStyleFlags;
@property(nonatomic) BOOL hasLyricsAvailable;
@property(nonatomic) BOOL hasNumberOfSections;
@property(nonatomic) BOOL hasLanguageOptionsAvailable;
@property(nonatomic) BOOL hasInfoAvailable;
@property(nonatomic) BOOL hasArtworkAvailable;
@property(nonatomic) BOOL hasRadioStationType;
@property(nonatomic) BOOL hasPlaylistType;
@property(nonatomic) BOOL hasIsExplicitItem;
@property(readonly, nonatomic) BOOL hasLocalizedContentRating;
@property(nonatomic) BOOL hasDuration;
@property(nonatomic) BOOL hasPlayCount;
@property(nonatomic) BOOL hasReleaseDate;
@property(nonatomic) BOOL hasEpisodeNumber;
@property(nonatomic) BOOL hasSeasonNumber;
@property(readonly, nonatomic) BOOL hasDirectorName;
@property(readonly, nonatomic) BOOL hasAlbumArtistName;
@property(readonly, nonatomic) BOOL hasTrackArtistName;
@property(readonly, nonatomic) BOOL hasAlbumName;
@property(nonatomic) BOOL hasPlaybackProgress;
@property(nonatomic) BOOL hasIsPlayable;
@property(nonatomic) BOOL hasIsContainer;
@property(readonly, nonatomic) BOOL hasSubtitle;
@property(readonly, nonatomic) BOOL hasTitle;
- (void)dealloc;

@end


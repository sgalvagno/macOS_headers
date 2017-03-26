//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class NSString, NSView;
@protocol ExportImageProtocol, ExportPluginBoxProtocol;

@protocol ExportPluginProtocol
- (NSString *)name;
- (void)cancelExport;
- (void)unlockProgress;
- (void)lockProgress;
- (CDStruct_ba67eed2 *)progress;
- (void)performExport:(NSString *)arg1;
- (void)startExport:(NSString *)arg1;
- (void)clickExport;
- (BOOL)validateUserCreatedPath:(NSString *)arg1;
- (BOOL)handlesMovieFiles;
- (BOOL)treatSingleSelectionDifferently;
- (NSString *)defaultDirectory;
- (NSString *)defaultFileName;
- (NSString *)getDestinationPath;
- (BOOL)wantsDestinationPrompt;
- (NSString *)requiredFileType;
- (void)viewWillBeDeactivated;
- (void)viewWillBeActivated;
- (NSView *)firstView;
- (NSView<ExportPluginBoxProtocol> *)settingsView;
- (id)initWithExportImageObj:(id <ExportImageProtocol>)arg1;
@end


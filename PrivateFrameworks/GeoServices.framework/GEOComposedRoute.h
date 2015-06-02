/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOComposedRoute : NSObject <GEOMapAccessRestrictions> {
    NSArray *_advisoryNotices;
    BOOL _allowsNetworkTileLoad;
    GEOMapRegion *_boundingMapRegion;
    unsigned int _currentDisplayStep;
    struct { struct PolylineCoordinate { unsigned int x_1_1_1; float x_1_1_2; } x1; struct PolylineCoordinate { unsigned int x_2_1_1; float x_2_1_2; } x2; } *_currentManeuverDisplayEndPoints;
    GEOComposedWaypoint *_destination;
    unsigned int _distance;
    GEORouteDriveMapMatcher *_driveMapMatcher;
    unsigned int _expectedTime;
    unsigned int _firstVisiblePoint;
    GEORoute *_geoRoute;
    NSArray *_legs;
    unsigned int _maneuverDisplayCount;
    BOOL _maneuverDisplayEnabled;
    NSArray *_maneuverDisplaySteps;
    NSString *_name;
    NSHashTable *_observers;
    GEOComposedWaypoint *_origin;
    NSData *_pointData;
    double *_pointLengths;
    NSData *_routeID;
    NSMutableArray *_sections;
    unsigned int _selectedLegIndex;
    NSMutableArray *_snappedPaths;
    NSArray *_steps;
    BOOL _usesZilch;
    GEORouteWalkMapMatcher *_walkMapMatcher;
    GEOZilchDecoder *_zilchDecoder;
}

@property (nonatomic, retain) NSArray *advisoryNotices;
@property (nonatomic) BOOL allowsNetworkTileLoad;
@property (nonatomic, readonly) GEOMapRegion *boundingMapRegion;
@property (nonatomic, readonly) void*controlPoints;
@property (nonatomic) unsigned int currentDisplayStep;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) GEOComposedWaypoint *destination;
@property (nonatomic, readonly) unsigned int distance;
@property (nonatomic) unsigned int expectedTime;
@property (nonatomic) unsigned int firstVisiblePoint;
@property (nonatomic, readonly) GEORoute *geoRoute;
@property (nonatomic, readonly) BOOL hasExpectedTime;
@property (nonatomic, readonly) BOOL hasHistoricTravelTime;
@property (readonly) unsigned int hash;
@property (nonatomic) unsigned int historicTravelTime;
@property (nonatomic, readonly) NSArray *legs;
@property (nonatomic, readonly) unsigned int maneuverDisplayCount;
@property (nonatomic) BOOL maneuverDisplayEnabled;
@property (nonatomic, retain) NSArray *maneuverDisplaySteps;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, retain) GEOComposedWaypoint *origin;
@property (nonatomic, readonly) unsigned int pointCount;
@property (nonatomic, readonly) NSData *routeID;
@property (nonatomic, readonly) NSArray *routeNames;
@property (nonatomic, readonly) int routeType;
@property (nonatomic, readonly) NSArray *sections;
@property (nonatomic) unsigned int selectedLegIndex;
@property (nonatomic, readonly) NSArray *steps;
@property (nonatomic, readonly) unsigned int stepsCount;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned int*trafficColorOffsets;
@property (nonatomic, readonly) unsigned int trafficColorOffsetsCount;
@property (nonatomic, readonly) unsigned int*trafficColors;
@property (nonatomic, readonly) unsigned int trafficColorsCount;
@property (nonatomic, readonly) int transportType;

// Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices

- (void)_addPaths:(id)arg1 forObserver:(id)arg2;
- (void)_addSnappedPolylinePathsForSection:(id)arg1 toPaths:(id)arg2 rects:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; }*)arg3 rectsCount:(unsigned long)arg4;
- (void)_buildPointSections;
- (struct PolylineCoordinate { unsigned int x1; float x2; })_findRouteCoordinateWithOffset:(float)arg1 aPos:(const struct Matrix<float, 2, 1> { float x1[2]; }*)arg2 aCoord:(const struct PolylineCoordinate { unsigned int x1; float x2; }*)arg3 bCoord:(const struct PolylineCoordinate { unsigned int x1; float x2; }*)arg4 pointOnSegment:(const struct Matrix<float, 2, 1> { float x1[2]; }*)arg5 bounds:(const struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; }*)arg6;
- (void)_initializeManeuverDisplaySteps;
- (id)_mapMatcherForTransportType:(int)arg1;
- (BOOL)_meetsMinimumPathLengthBetweenStart:(unsigned int)arg1 end:(unsigned int)arg2;
- (bool)_needsCornerOffsetAt:(unsigned int)arg1;
- (void)_snapPaths:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)addObserver:(id)arg1;
- (id)advisoryNotices;
- (BOOL)allowsNetworkTileLoad;
- (double)approximateRoadWidthAtPointIndex:(unsigned int)arg1;
- (id)boundingMapRegion;
- (BOOL)checkDrivingArrivalForCoordinate:(struct { double x1; double x2; })arg1 coordinateOnRoute:(struct { double x1; double x2; })arg2 routePointIndex:(unsigned int)arg3 distanceFromRoute:(double)arg4 arrivalMapRegion:(id)arg5 checkArrivalRadius:(BOOL)arg6 checkDistanceAlongRoute:(BOOL)arg7 isOnRoute:(BOOL)arg8;
- (void)clearSnappedPathsForObserver:(id)arg1;
- (void*)controlPoints;
- (struct PolylineCoordinate { unsigned int x1; float x2; })coordinateAtOffset:(double)arg1;
- (struct PolylineCoordinate { unsigned int x1; float x2; })coordinateAtOffset:(double)arg1 fromRouteCoordinate:(struct PolylineCoordinate { unsigned int x1; float x2; })arg2;
- (struct PolylineCoordinate { unsigned int x1; float x2; })coordinateAtOffset:(double)arg1 fromRoutePoint:(unsigned int)arg2;
- (double)courseAtRouteCoordinateIndex:(unsigned int)arg1;
- (unsigned int)currentDisplayStep;
- (void)dealloc;
- (id)description;
- (id)destination;
- (unsigned int)distance;
- (double)distanceBetweenLocation:(struct { double x1; double x2; })arg1 nextPointIndex:(unsigned int)arg2 toPointIndex:(unsigned int)arg3;
- (double)distanceBetweenRoutePointIndex:(unsigned int)arg1 toPointIndex:(unsigned int)arg2;
- (double)distanceBetweenStep:(id)arg1 andStep:(id)arg2;
- (double)distanceFromPoint:(struct PolylineCoordinate { unsigned int x1; float x2; })arg1 toPoint:(struct PolylineCoordinate { unsigned int x1; float x2; })arg2;
- (double)distanceFromPointIndex:(unsigned int)arg1 toPointIndex:(unsigned int)arg2;
- (unsigned int)expectedTime;
- (unsigned int)firstVisiblePoint;
- (void)forEachSnappedPath:(id /* block */)arg1;
- (int)formOfWayAt:(unsigned int)arg1;
- (id)geoRoute;
- (void)getFormOfWay:(int*)arg1 roadClass:(int*)arg2 at:(unsigned int)arg3;
- (id)getSnappedPathsForLocation:(struct { double x1; double x2; })arg1 observer:(id)arg2;
- (id)getSnappedPathsForVisibleRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 rectsToSnap:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 rectsToSnapCount:(unsigned long)arg3 observer:(id)arg4;
- (BOOL)hasExpectedTime;
- (BOOL)hasHistoricTravelTime;
- (unsigned int)historicTravelTime;
- (id)initWithCompanionRoute:(id)arg1;
- (id)initWithRoute:(id)arg1;
- (BOOL)isLocationCoordinate:(struct { double x1; double x2; })arg1 withinDistance:(double)arg2 alongRoute:(double)arg3 withTransportType:(int)arg4;
- (BOOL)isSnapping;
- (id)legForPointIndex:(unsigned int)arg1;
- (id)legForStepIndex:(unsigned int)arg1;
- (unsigned int)legIndexForPointIndex:(unsigned int)arg1;
- (unsigned int)legIndexForStepIndex:(unsigned int)arg1;
- (id)legs;
- (struct { double x1; double x2; })locationAtDistance:(double)arg1 from:(id)arg2;
- (unsigned int)maneuverDisplayCount;
- (BOOL)maneuverDisplayEnabled;
- (struct { struct PolylineCoordinate { unsigned int x_1_1_1; float x_1_1_2; } x1; struct PolylineCoordinate { unsigned int x_2_1_1; float x_2_1_2; } x2; })maneuverDisplayEndpointsAtIndex:(unsigned long)arg1;
- (void)maneuverDisplayHasChanged;
- (id)maneuverDisplaySteps;
- (id)matchToRouteWithLocation:(id)arg1 trackedLocation:(id)arg2 onDate:(id)arg3 transportType:(int)arg4 useSnappedPaths:(BOOL)arg5;
- (id)matchToRouteWithLocation:(id)arg1 trackedLocation:(id)arg2 onDate:(id)arg3 transportType:(int)arg4 useSnappedPaths:(BOOL)arg5 maxDistance:(double)arg6;
- (id)name;
- (void)notifyTrafficUpdated;
- (id)origin;
- (struct { double x1; double x2; })pointAt:(unsigned int)arg1;
- (struct { double x1; double x2; })pointAtRouteCoordinate:(struct PolylineCoordinate { unsigned int x1; float x2; })arg1;
- (unsigned int)pointCount;
- (double)remainingDistanceAlongRouteFromStepIndex:(unsigned int)arg1 currentStepRemainingDistance:(double)arg2;
- (double)remainingTimeAlongRouteFromStepIndex:(unsigned int)arg1 currentStepRemainingDistance:(double)arg2;
- (void)removeObserver:(id)arg1;
- (id)routeID;
- (id)routeLegOfType:(int)arg1 startStepIndex:(unsigned int)arg2 steps:(id)arg3 startPointIndex:(unsigned int)arg4 legPointCount:(unsigned int)arg5;
- (id)routeMatchAtDistance:(double)arg1 from:(id)arg2 trackedLocation:(id)arg3 stopAtEndOfTunnel:(BOOL)arg4 stopAtEndOfManeuver:(BOOL)arg5 date:(id)arg6;
- (id)routeNames;
- (int)routeType;
- (id)sections;
- (unsigned int)selectedLegIndex;
- (void)setAdvisoryNotices:(id)arg1;
- (void)setAllowsNetworkTileLoad:(BOOL)arg1;
- (void)setCurrentDisplayStep:(unsigned int)arg1;
- (void)setDestination:(id)arg1;
- (void)setExpectedTime:(unsigned int)arg1;
- (void)setFirstVisiblePoint:(unsigned int)arg1;
- (void)setHistoricTravelTime:(unsigned int)arg1;
- (void)setManeuverDisplayEnabled:(BOOL)arg1;
- (void)setManeuverDisplaySteps:(id)arg1;
- (void)setOrigin:(id)arg1;
- (void)setSelectedLegIndex:(unsigned int)arg1;
- (void)setupRoadSegmentIdsForRouteHintFromMatch:(id)arg1 distanceAhead:(double)arg2 roadSegmentIdGenerator:(id /* block */)arg3 handler:(id /* block */)arg4;
- (id)stepAtIndex:(unsigned int)arg1;
- (id)stepForPointIndex:(unsigned int)arg1;
- (unsigned int)stepIndexForPointIndex:(unsigned int)arg1;
- (id)steps;
- (unsigned int)stepsCount;
- (BOOL)supportsSnapping;
- (unsigned int)trafficColorOffsetAtIndex:(unsigned int)arg1;
- (unsigned int*)trafficColorOffsets;
- (unsigned int)trafficColorOffsetsCount;
- (unsigned int*)trafficColors;
- (unsigned int)trafficColorsCount;
- (int)transportType;
- (int)transportTypeForStep:(id)arg1;
- (void)updateManeuverDisplayEndpointsAtMetersPerPoint:(double)arg1;
- (void)updateManeuverDisplayEndpointsAtMetersPerPoint:(double)arg1 startOffsetInPoints:(double)arg2 endOffsetInPoints:(double)arg3 roadWidthInPoints:(double)arg4;
- (id)zilchDataFromStepIndex:(unsigned int)arg1;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

- (struct CGImage { }*)_mapKitImage;
- (id)instructionsForStep:(id)arg1;

@end